#include <iostream>
using namespace std ;
int main () {
    int marks;
    cout << "Enter Your Marks" << endl;
    cin>>marks;
    cout << "Marks: " << marks << endl;

    if (marks>90){
        cout << "A" << endl;
    }
    else if (marks>80){
        cout << "B" << endl;
    }
    else if (marks>70){
        cout << "C" << endl;
    }
    else if  (marks>40){
        cout << "C" << endl;
    }
    else{
        cout << "F" << endl;
    }

}