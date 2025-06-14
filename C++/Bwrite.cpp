#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[30];
};

int main() {
    Student s1 = {101, "Ravi"};

    ofstream outFile("student.dat", ios::binary);
    outFile.write(reinterpret_cast<char*>(&s1), sizeof(s1));
    outFile.close();

    cout << "Data written to binary file.\n";
    return 0;
}