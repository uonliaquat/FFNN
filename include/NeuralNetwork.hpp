#ifndef _NEURALNETWORK_HPP_
#define _NEURALNETWORK_HPP_

#include<iostream>
#include <vector>
#include <math.h>
#include "../include/Matrix.hpp"
#include "../include/Topology.hpp"

using namespace std;

#define SIGM 0
#define RELU 1
#define TANH 2
#define SOFTMAX 3



class NeuralNetwork{
    private:
        Topology * topology;
        vector<Matrix*> weights;
        vector<Matrix*> outputs;
        vector<Matrix*> inputs;
        vector<Matrix*> deltas;

        double error = 0;
        Matrix * feedForward(Matrix *);
        void backProp(Matrix *);

        Matrix * delta_LL(Matrix *, const int);
        Matrix * delta_HL(const int, Matrix *, const int);
        Matrix * deltaWeight(const int, Matrix *, const int);

        static double  calError(Matrix *, Matrix *);

    public:
        NeuralNetwork(const Topology &);
        void train(const vector<vector<double>>&, const vector<vector<double>>&);

        static double activatedOutput(const double, const int);
        static double derivedActivatedOutput(const double, const int);
        static double derivedError(const double, const double);


        void print();

};


#endif
