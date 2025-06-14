#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");
    if (file.is_open()) {
        file << "Hello, file!\n";
        file << "This is a test.\n";
        file.close();
    } else {
        cout << "Unable to open file.\n";
    }
    return 0;
}