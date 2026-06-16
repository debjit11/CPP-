#include <iostream>
using namespace std ;

void solve(int *arr) {
    cout << "inside func: " << sizeof(arr) << endl;
}

int main() {
    // int number = 50;
    // cout << "Printing address of number: " << &number << endl;
    // int *ptr = &number; // Store the address of number inside ptr

    // cout << number << endl; //Prints the value of number
    // cout << &number << endl; //Prints the address of number
    // cout << ptr << endl;//ptr stores the address of number:Same as &number
    // cout << &ptr << endl; //P rints the address of pointer itself
    // cout << *ptr << endl; // *ptr means go to the address and get value
    // (*ptr) = (*ptr) + 1; //so → number = number + 1
    // cout << number << endl;


    
    // int arr[4] = {1,2,3,4};
    // cout << sizeof(arr) << endl;
    // solve(arr);

        int a = 5;
    int *ptr = &a;
    int **ctr = &ptr;
    int ***dtr = &ctr;
    
    cout << a << endl;
    cout << &a << endl;
    //cout << *a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;
    cout << ctr << endl;
    cout << &ctr << endl;
    cout << *ctr << endl;
    cout << **ctr << endl;
    cout << dtr << endl;
    cout << &dtr << endl;
    cout << *dtr << endl;
    cout << **dtr << endl;
    cout << ***dtr << endl;
    return 0;
}