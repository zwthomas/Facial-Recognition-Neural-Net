#include <iostream>
#include <fstream>
using namespace std;

double* parseImage(string filename);

extern int IMAGE_WIDTH;
extern int IMAGE_HEIGHT;

int main() {
    string filename = "an2i_left_happy_sunglasses_4.pgm";
    parseImage(filename);

    return 0;
}

double* parseImage(string filename) {
    ifstream fileInputs;                    // Open the file
    fileInputs.open(filename, ios::in);

    string in;
    fileInputs >> in;           // Type
    int width, height, max, pixel;
    fileInputs >> IMAGE_WIDTH;
    fileInputs >> IMAGE_HEIGHT;
    fileInputs >> max;

    cout << IMAGE_WIDTH << " " << IMAGE_HEIGHT << " " << max << endl;


}