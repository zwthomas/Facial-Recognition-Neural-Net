//
// Created by Craven on 4/26/2018.
//

#include "sigmoid.h"
#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

/**
 * Constructor for the perceptron. Randomly generates the weights for all its inputs.
 *
 * @param inputs   the number of inputs into the node
 */
sigmoid::sigmoid(int inputs) {
    weights = new double[inputs];
    for (int count = 0; count < inputs; count++) {
        double weight = ((double) rand()/RAND_MAX) * 2 - 1;
        if (weight < 0 && weight > -1.0e-5) {                   // Regenerate if close to zero
            count--;
            continue;
        } else if (weight > 0 && weight < 1.0e-5) {
            count--;
            continue;
        }
        weights[count] = weight;
    }
    numWeights = inputs;
}

/**
 * Displays the weights in the perceptron for debugging purposes.
 */
void sigmoid::displayWeights() {
    for (int ndx = 0; ndx < numWeights; ndx++) {
        cout << weights[ndx] << " ";
    }
    cout << endl;
}

/**
 * Evaluates the given inputs at the node.
 *
 * @param in    list of input values
 * @return      1 or -1
 */
double sigmoid::eval(double *inputs) {
    double sum = 0;
    for (int ndx = 0; ndx < numWeights; ndx++) {
        sum += weights[ndx] * inputs[ndx];
    }

    return 1 / (1 + exp(-1 *  sum));
}
double sigmoid::getWeight(int weightNdx) {
    return weights[weightNdx];
}

int sigmoid::numWeight() {
    return numWeights;
}

void sigmoid::setWeight(int weightNdx, double w) {
    weights[weightNdx] = w;
}

/**
 * For testing purposes allow the weights of a perceptron to be set.
 *
 * @param w         Array of the weights
 */
void sigmoid::setWeights(double *w) {
    for (int ndx = 0; ndx < numWeights; ndx++) {
        weights[ndx] = w[ndx];
    }
}