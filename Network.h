//
// Created by Craven on 4/26/2018.
//

#ifndef FACIAL_RECOGNITION_NETWORK_H
#define FACIAL_RECOGNITION_NETWORK_H

#include "sigmoid.h"
#include <list>
#include <string>
class Network {
public:
    Network(int numLayers, int numNodes[], int numInputs);
    ~Network();
    void displayNetwork();
    void feedForward(int **inputs, int **outputs, int cases, int numInputs, int outputNum, std::string file);
    void setWeight(int col, int row, double w[]);
protected:

private:
    sigmoid **LAYERS;
    int NUM_LAYERS;
    int *NUM_NODES;
    int NUM_INPUTS;
    double* fillInputs(int *inputs, int numInputs);
    bool checkOutputs(double *generatedOutputs, int *correctOutputs, int numOutputs);
    void backProp(int *output, double **allOutputs, int numOutput, double learningRate, int *input);
    double* createDeltas(int *output, double *generatedOutputs, int numOutput);
    double calcSum(double **allDeltas, int layerNdx, int nodeNdx);
    void adjustWeights(double **allDeltas, int *input, double **allOutputs, int layerNdx, int nodeNdx, double learningRate);


};


#endif //FACIAL_RECOGNITION_NETWORK_H
