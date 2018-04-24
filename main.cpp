#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string fileName = "an2i_left_happy_sunglasses_4.pgm";
    ifstream fileInputs;                    // Open the file
    fileInputs.open(fileName, ios::in);
    string in;
    fileInputs >> in;           // Type
    int width, height, max, pixel;
    fileInputs >> width;
    fileInputs >> height;
    fileInputs >> max;

    cout << width << " " << height << " " << max << endl;

    return 0;
}