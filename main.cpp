#include <iostream>
#include <fstream>
#include <iomanip>

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
    fileInputs.open(filename, ios::binary);
    string in;
    fileInputs >> in;           // Type
    cout << in << " ";
    int max;
    unsigned char pixel[32 * 30];
    fileInputs >> IMAGE_WIDTH;
    fileInputs >> IMAGE_HEIGHT;
    fileInputs >> max;          // Max greyscale value

    cout << IMAGE_WIDTH << " " << IMAGE_HEIGHT << " " << max << endl;

    char temp;
    fileInputs.seekg(1, ios_base::cur);
    for (int ndx = 0; ndx < IMAGE_HEIGHT * IMAGE_WIDTH; ndx++) {
        temp = fileInputs.get();
        if (temp < 0) {
            pixel[ndx] = 256 - temp;
        } else {
            pixel[ndx] = temp;
        }
    }


    cout << hex << setfill('0') << setw(2);
    double pixelValues[IMAGE_HEIGHT * IMAGE_WIDTH];
    for (int ndx = 1; ndx <= IMAGE_WIDTH * IMAGE_HEIGHT; ndx++) {
        cout << hex << setfill('0') << setw(2);
        cout << (unsigned int) pixel[ndx - 1] << " ";
        if (ndx %32 == 0) {
            cout << endl;
        }

    }

//    for (int ndx = 0; ndx < IMAGE_WIDTH * IMAGE_HEIGHT; ndx++) {
//        cout << pixelValues[ndx] << endl;
//    }
}