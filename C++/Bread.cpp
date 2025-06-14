#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    int roll;
    char name[30];
};

int main() {
    Student s2;

    ifstream inFile("student.dat", ios::binary);
    inFile.read(reinterpret_cast<char*>(&s2), sizeof(s2));
    inFile.close();

    cout << "Roll: " << s2.roll << ", Name: " << s2.name << endl;
    return 0;
}
