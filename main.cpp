#include <iostream>
#include <fstream>
using namespace std;

double* parseImage(string filename);

int IMAGE_WIDTH;
int IMAGE_HEIGHT;

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
    int max, pixel;
    fileInputs >> IMAGE_WIDTH;
    fileInputs >> IMAGE_HEIGHT;
    fileInputs >> max;          // Max greyscale value

//   cout << IMAGE_WIDTH << " " << IMAGE_HEIGHT << " " << max << endl;
    for (int i = 1; i <= 32 * 30; i++) {
        fileInputs >> pixel;
        cout << pixel << " ";
        if (i %32 == 0 ) {
            cout << endl;
        }
    }


//    double pixelValues[IMAGE_HEIGHT * IMAGE_WIDTH];
//    for (int ndx = 0; ndx < IMAGE_WIDTH * IMAGE_HEIGHT; ndx++) {
//        fileInputs >> pixel;
//        cout << pixel << endl;
//    }

//    for (int ndx = 0; ndx < IMAGE_WIDTH * IMAGE_HEIGHT; ndx++) {
//        cout << pixelValues[ndx] << endl;
//    }
}