#include "../include/NeuralNetwork.hpp"

NeuralNetwork::NeuralNetwork(const Topology &topology){
    this->topology = new Topology(topology);

    //cout<<"Weights: "<<endl;
    
    for(int i = 1; i < topology.layers.size(); i++){
        Matrix * weight_matrix = new Matrix(topology.layers[i - 1] + 1, topology.layers[i]);
        weight_matrix->randomize();
        weights.push_back(weight_matrix);
        //weight_matrix->print();

    }
}

Matrix * NeuralNetwork::feedForward(Matrix * input){
    assert(input->cols() == topology->layers[0]);
    
    Matrix * output = input->clone();

    for(int i = 0; i < weights.size(); i++){
        output->addCol(1);
        outputs.push_back(output->clone());
        output = output->dotProduct(weights[i]);
        inputs.push_back(output->clone());
        //cout<<"Feed forward Layer Before Map" << i << endl;
        //for(int j = 0; j < output->cols(); j++){
        //    cout<<output->data()[0][j]<<"   ";
        //}
        //cout<<endl;
        int activationType = i < topology->activationTypes.size() ? topology->activationTypes[i] : SIGM;
        output->map(activatedOutput, activationType);
        //cout<<"Feed forward Layer After Map" << i << endl;
        //for(int j = 0; j < output->cols(); j++){
        //    cout<<output->data()[0][j]<<"   ";
        //}
        //cout<<endl<<endl;
    }
    outputs.push_back(output->clone());
    return output;
    
}

void NeuralNetwork::backProp(Matrix * target){

    vector<Matrix *> newWeightMatrices;
    for(int i = weights.size() - 1; i >= 0; i--){
        int activationType = i < topology->activationTypes.size() ? topology->activationTypes[i] : SIGM;
        Matrix * newWeightMatrix = weights[i]->subtract(deltaWeight(i, target, activationType));
        //cout<<"New Weights "<< i << endl;
        //newWeightMatrix->print();
        newWeightMatrices.push_back(newWeightMatrix->clone());
        delete newWeightMatrix;

    }

    for(int i = 1; i <= weights.size(); i++){
        delete deltas[i - 1];
        deltas.erase(deltas.begin());
        delete weights[i - 1];
        weights[i - 1] = newWeightMatrices[weights.size() - i];
    }
}


Matrix * NeuralNetwork::deltaWeight(const int layer, Matrix * target, const int activationType){
    Matrix * d_weight, * delta;
    if(layer == topology->layers.size() - 2){
        delta = delta_LL(target, activationType);
        //cout<<"Last Later Delta: "<<endl;
        //delta->print();
    }
    else{
        delta = delta_HL(layer, deltas.back(), activationType);
        Matrix * temp = delta;
        delta = delta->removeCol(delta->cols() - 1);
        //cout<<"Hidden Later Delta: "<<endl;
        //delta->print();

        delete temp;

    }
    deltas.push_back(delta->clone());
    Matrix * transposedOutput =  outputs[layer]->transpose();
    d_weight = transposedOutput->dotProduct(delta);
    d_weight->multiply(topology->learning_rate);
    delete transposedOutput;
    delete delta;
    return d_weight;
}

Matrix * NeuralNetwork::delta_LL(Matrix * target, const int activationType){
   Matrix * d_error  =  outputs[outputs.size() - 1]->subtract(target);
   Matrix * delta =  outputs[outputs.size() - 1]->clone();
   delta->map(derivedActivatedOutput, activationType);
   Matrix * temp_delta = delta;
   delta = delta->multiply(d_error);
   delete temp_delta;
   delete d_error;
   return delta;
}

Matrix * NeuralNetwork::delta_HL(const int layer, Matrix * delta, const int activationType){
    Matrix * delta_weights = weights[layer + 1]->clone();
    Matrix * new_delta = delta_weights->dotProduct(delta);
    Matrix * hl_derivedOutput = outputs[layer + 1]->clone();
    hl_derivedOutput->map(derivedActivatedOutput, activationType);
    Matrix * temp_delta = new_delta;
    new_delta = (new_delta->transpose())->multiply(hl_derivedOutput);
    delete temp_delta;
    delete hl_derivedOutput;
    delete delta_weights;
    return new_delta;
}


void NeuralNetwork::train(const vector<vector<double>> &data, const vector<vector<double>> &labels){
    assert(data.size() == labels.size());

    Matrix *input, *target_output, *output;
    for(int i = 0; i < topology->epochs; i++){
        error = 0;
        for(int j = 0; j < data.size(); j++){
            
            input = Matrix::toRowMatrix(data[j]);
            target_output = Matrix::toRowMatrix(labels[j]);
            //cout<<"Input "<<endl;
            //input->print();


            output = feedForward(input);
            //cout<<"Feed Forward: "<<endl;
            //output->print();
            error += calError(target_output, output);
            //cout<<"Error: "<<calError(target_output, output)<<endl;;
            //cout<<"Target Output: "<<endl;
            //target_output->print();

            backProp(target_output);
            delete input;
            delete target_output;
            delete output;
        }
        error /= data.size();
        cout<<"Epoch: "<<i;
        cout<< "    Error: " <<error<<endl;
    }
    
}

double NeuralNetwork::activatedOutput(const double x, const int type){
    if(type == SIGM){
        return (1 / (1 + exp(-x)));
    }
    else if(type == RELU){
        
    }
    else if(type == TANH){
        return ((exp(x) - exp(-x))/(exp(x) + exp(-x)));
    }
    else if(type == SOFTMAX){

    }
    return -1;
}

double NeuralNetwork::derivedActivatedOutput(const double x, const int type){
    if(type == SIGM){
        return (x * (1 - x)); 
    }
    else if(type == RELU){

    }
    else if(type == TANH){
        return (1 - pow(x, 2));
    }
    else if(type == SOFTMAX){

    }
    return -1;
}

double NeuralNetwork::calError(Matrix * target_vec, Matrix * output_vec){
    Matrix * error_vec =  Matrix::pow(target_vec->subtract(output_vec), 2);
    error_vec->multiply(0.5);
    return error_vec->mean();
}

double NeuralNetwork::derivedError(const double target, const double output){
    return -(target - output);
}


void NeuralNetwork::print(){
    for(unsigned int neurons : topology->layers){
        for(int i = 0; i < neurons; i++){
            cout << "* ";
        }
        cout<<endl<<endl;
    }

}
