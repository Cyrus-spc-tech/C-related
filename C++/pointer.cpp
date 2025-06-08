//pointer 
#include <iostream>
using namespace std;
int main(){
    int a = 10; // Declare an integer variable
    int *ptr = &a; // Declare a pointer and assign it the address of 'a'

    cout << "Value of a: " << a << endl; // Output the value of 'a'
    cout << "Address of a: " << &a << endl; // Output the address of 'a'
    cout << "Value of ptr: " << ptr << endl; // Output the value of 'ptr' (address of 'a')
    cout << "Value pointed to by ptr: " << *ptr << endl; // Output the value pointed to by 'ptr'
    *ptr = 20; // Change the value of 'a' using the pointer
    cout << "New value of a: " << a << endl; // Output the new value of 'a' after modification through pointer
    cout << "Value pointed to by ptr after modification: " << *ptr << endl; // Output the value pointed to by 'ptr' after modification
    cout << "Address of ptr: " << &ptr << endl; // Output the address of 'ptr'
    cout << "Size of pointer: " << sizeof(ptr) << " bytes" << endl; // Output the size of the pointer
    cout << "Size of integer: " << sizeof(a) << " bytes" << endl; // Output the size of the integer variable
    cout << "Size of pointer to integer: " << sizeof(int*) << " bytes" << endl; // Output the size of a pointer to an int 




    return 0;
}