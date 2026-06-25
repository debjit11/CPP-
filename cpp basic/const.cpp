#include <iostream>
using namespace std;

int main() {

    
    // 1. Constant Variable
    

    // const int x = 5;
    // cout << "x = " << x << endl;

    // x = 10;   //  Error (cannot modify a const variable)



   
    // 2. Pointer to Constant Data
    //    const int* ptr
    //    (Data cannot change, pointer can)
   

    // const int *ptr = new int(2);

    // cout << *ptr << endl;

    // *ptr = 20;      //  Error (cannot change data)

    // int b = 50;
    // ptr = &b;       //  Allowed (pointer changed)

    // cout << *ptr << endl;



   
    // 3. Constant Pointer
    //    int* const ptr
    //    (Pointer cannot change, data can)
   

    // int *const ptr = new int(2);

    // cout << *ptr << endl;

    // *ptr = 20;      //  Allowed

    // cout << *ptr << endl;

    // int b = 100;
    // ptr = &b;       // Error (pointer cannot change)



   
    // 4. Constant Pointer to Constant Data
    //    const int* const ptr
    //    (Neither data nor pointer can change)
   

    // const int *const ptr = new int(2);

    // cout << *ptr << endl;

    // *ptr = 20;      //  Error

    // int b = 30;
    // ptr = &b;       //  Error



    return 0;
}