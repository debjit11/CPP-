#include <iostream>
using namespace std;
int x = 2;  // Global variable
int main() {
    ::x = 44; // Change global variable

    int x = 22; // Local variable of main()

    { // A variable declared inside a function or block {} is called a local variable.
        int x = 1; // Local variable of this block
        cout << x << endl;
        cout << ::x << endl;
        
    }
    cout << x << endl;

 
}