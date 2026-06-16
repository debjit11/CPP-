#include <iostream>
using namespace std ;

int main (){
    int a = 8;
    int &temp = a; // reference vaiable is call same value with diffrent name 
    cout << temp << endl;
    temp ++ ;
    cout << temp << endl;
    a -- ;
    cout << a << endl;


    return 0;
}