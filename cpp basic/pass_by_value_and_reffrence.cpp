#include <iostream>
using namespace std ;
// void solve(int a){ // when you do pass by value then it will be copy
//     cout << "Print func: "<<a << endl;
//     a++ ;
//     cout << "Print func: "<<a << endl;
// }

// int main(){
//     int a = 5;
//     cout << "Print main: "<<a << endl;
//     solve(a); // here a is just copy to function 
    
//     cout << "Print main: "<<a << endl; // here print 5 because it is local not function

//     return 0;

// }
 
// void solve(int &a){ // when you do pass by reffrence  then it will be actual local vale
//     cout << "Print func: "<<a << endl;
//     a++ ;
//     cout << "Print func: "<<a << endl;
// }

// int main(){
//     int a = 5;
//     cout << "Print main: "<<a << endl;
//     solve(a); // here a is just copy to function 
    
//     cout << "Print main: "<<a << endl; // here print 6, because i will do riffrence

//     return 0;

// }
// same for char, string

// Note in array : always automatic it will pass by reffrence 

void countEvenNum(int arr[], int size, int &count) {
    for(int index=0;index<size; index++) {
        if(arr[index] % 2 == 0) {
            count++;
        }
    }
}

int main() {

    int arr[] = {1,2,3,4,5};
    int size = 5;
    int count = 0;

    countEvenNum(arr,size,count); 
    cout << "Even Number count: " << count << endl;
    return 0;
}