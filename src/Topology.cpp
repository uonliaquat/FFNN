#include "../include/Topology.hpp"


Topology::Topology(){

}


Topology::Topology(const Topology  &topology){
    for(int i = 0; i < topology.layers.size(); i++){
        this->layers.push_back(topology.layers[i]);
    }

    for(int i = 0; i < topology.activationTypes.size(); i++){
        this->activationTypes.push_back(topology.activationTypes[i]);
    }

}



Topology::Topology(const vector<unsigned int> &layer){
    for(int i = 0; i < layer.size(); i++){
        this->layers.push_back(layer[i]);
    }
}

Topology::Topology(const vector<unsigned int> &layer, const vector<unsigned int> &activationType){
    for(int i = 0; i < layers.size(); i++){
        this->layers.push_back(layer[i]);
    }

    for(int i = 0; i < activationTypes.size(); i++){
        this->activationTypes.push_back(activationType[i]);
    }
}
