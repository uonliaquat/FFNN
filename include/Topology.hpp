#ifndef _TOPOLOGY_HPP_
#define _TOPOLOGY_HPP_

#include <iostream>
#include <vector>
using namespace std;

class Topology{
    public:
        vector<unsigned int> layers;
        vector<unsigned int> activationTypes;
        double learning_rate = 0.01;
        int epochs = 1000;
        Topology();
        Topology(const Topology&);

        Topology(const vector<unsigned int>&);

        Topology(const vector<unsigned int>&, const vector<unsigned int>&);
};

#endif
