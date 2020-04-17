#include <iostream>
#include <vector>
#include "../include/Matrix.hpp"
#include "../include/NeuralNetwork.hpp"
#include "../include/Topology.hpp"
#include "../include/CSV.hpp"
using namespace std;

int main(int argc, char **argv){

    srand (time(NULL));

    CSV csv("data.csv", "labels.csv");
    vector<vector<double>> data = csv.readData();
    vector<vector<double>> labels = csv.readLabels();

 /*   for(vector<double> instance : dataList){
        for(int i = 0; i < instance.size(); i++){
            cout << instance[i] << " ";
        }
        cout<<endl;
    }

    for(vector<double> instance : labelsList){
        for(int i = 0; i < instance.size(); i++){
            cout << instance[i] << " ";
        }
        cout<<endl;
    }
*/

    Topology topology;
    topology.layers.push_back(data[0].size());
    topology.layers.push_back(15);
    topology.layers.push_back(labels[0].size());

    NeuralNetwork model(topology);
    //model.print();
    model.train(data, labels);


  
    return 0;
}
