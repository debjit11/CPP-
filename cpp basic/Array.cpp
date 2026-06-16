#include <iostream>
using namespace std ;

// int main (){
// Declaration
    // int arr [10];

// initialization
    // int brr [4] = {2,4,5,8};

    // int multiple[10] = {2,4,6,8,10,12,14,16,18,20};

    // cout << multiple[2] << endl;

    // for (int i = 0; i <= 9; i ++){
    //     cout << multiple[i] << " ";
    // }

    // int arr[5];

    // for (int index = 0; index <=4; index ++){
    //     cout << "Enter the Idx Number of arr["<<index <<"]:" << endl;
    //     cin >> arr[index];
    //     cout << endl;
    // }

    // for (int index = 0; index <=4; index ++){
    //     cout << arr[index] << " ";
    // // }
    // int arr[10] = {2,4,6,8,10,12,14,16,18,20};
    // int sum = 0;
    // for (int index = 0; index <=9; index ++){
    //          sum = sum + arr[index];
    // }
    // cout << sum << endl;

//     return 0;
// }
// using func
void printarray(int arr [],int size ){
    for (int index = 0; index <=size -1; index ++){
        cout << arr[index] << " ";
    }
}

void multiply(int num[],int size){
    int count = 1;
    for (int index = 0; index <=size -1; index ++){
            num[index] = 10 * count;
            count ++ ;
    }
}
void  flip(int arr[],int size){
    for (int index = 0; index < size; index ++){
        if (arr[index] == 1){
            arr[index] = 0;
        }
        else{
             arr[index] = 1;
        }
    }
}
// for 2d array
void printArray(int arr[][4], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    // int num[10];
    // int size = 10;  
    // multiply(num,size);
    
    // int arr[] = {1,1,0,0,0,1,0,1};
    // int size = 8;
    // cout << "Before:";
    // printarray(arr,size);
    // cout << endl;
    
    // flip(arr,size);
    // cout << "After:";
    // printarray(arr,size);
    // cout << endl;

     int arr[3][4] = {
        {12, 30, 21, 40},
        {10, 31, 40, 51},
        {31, 61, 80, 30}
    };
    int rows = 3;
    int cols = 4;
    printArray(arr,rows,cols);
    return 0;
}