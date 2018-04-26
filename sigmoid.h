//
// Created by Craven on 4/26/2018.
//

#ifndef FACIAL_RECOGNITION_SIGMOID_H
#define FACIAL_RECOGNITION_SIGMOID_H

#include <list>
class sigmoid {
public:
    explicit sigmoid(int inputs);
    void displayWeights();
    double eval(double *inputs);
    void setWeights(double w[]);
    double getWeight(int weightNdx);
    int numWeight();
    void setWeight(int weightNdx, double w);
    double *weights;
    int numWeights;
protected:

private:

};


#endif //FACIAL_RECOGNITION_SIGMOID_H
