#include <iostream>
#include <cstring>

using namespace std ;

// int main (){
    // char arr[10] = "Debjit";
    // cout << arr[3] << endl;
   // int asciiValue = arr[6]; // null char ascii  0
    // cout << asciiValue << endl;
    //   int arr[4] = {2,4,5,6};//for array it print base address
    //    cout << arr <<endl;
    //    char brr[10] = "Debjit"; // for char array it print full array
    //    cout << brr << endl;
    // return 0;
// }
// Some time interview don's allow to libery then you need 
// to write manual so that's why it is importent other wise all have libery
int getlength(char arr[]){
    int count = 0;
    int index = 0;

    while(arr[index]!='\0'){
        count++;
        index ++;
    }
    return count;
}
// Findout the length
// int main(){
//     char arr[] = "Debjit";
//     cout << getlength(arr)<< endl;
//     return 0;
// }
void concatArray(char a[], char b[]) { //a → main string (where result will go)
// b → string to add
    int aIndex = getlength(a); //This means: start adding new characters after "Debjit"
    int bIndex = 0; //We will start copying from beginning of "Das"

    while(b[bIndex] != '\0') { //Loop runs until end of string "Das"
        a[aIndex] = b[bIndex]; //Copy each character of "Das" into "Debjit"
        aIndex++; //Move forward in both arrays
        bIndex++;// Move forward in both arrays
    }

    a[aIndex] = '\0';
}
void copyArray(char actualArr[], char copyArr[]) {
    int aIndex = 0;
    int bIndex = 0;

    while(actualArr[aIndex] != '\0') {
        //start copying
        copyArr[bIndex] = actualArr[aIndex];
        aIndex++;
        bIndex++;
    }
    copyArr[bIndex] = '\0';
}
bool compareArray(char a[], char b[]) {
    int aIndex = 0;
    int bIndex = 0;
    int aLength = getlength(a);
    while(aIndex <= aLength) {
        if(a[aIndex] != b[bIndex]) {
            return false;
        }
        else {
            aIndex++;
            bIndex++;
        }
    }
    //agar yaha tak aa gye ho, iska matlab saaare 
    //character match hogye h 
    return true;
}

int main(){
// Using libery
char actual[] = "Debjit";
char ans[100];

char a[] = "Debjit";
char b[] = "Das";

strcat(a,b);  // concatenate b into a


cout << a << endl;


// cout << "Print length of actul:"<< strlen(actual) << endl;

strcpy(ans,actual); // here ans (kaha per copy karana chate h) and actual(keya copy karana chate h )
cout << ans << endl;
// ans[0] = 'k';

if (strcmp(actual,ans)== 0){ // in cpp docs '0' is true
    cout << "char arrays are same" << endl;
    }
    else {
        cout << "char arrays are not same" << endl;
    }

//Row code 
// char a[50] = "Debjit";
// char b[50] = "Das";

// concatArray(a, b);
// cout << "Print a: " << a << endl;
//     return 0;

    // char actual[100] = "Debjit";
    // char ans[100];

    // copyArray(actual, ans);

    // cout << "printing ans array:" << ans << endl;


    // char arr[] = "Debjit";
    // char brr[] = "Debjit";

    // cout << compareArray(arr,brr) << endl;
//      return 0;
// }