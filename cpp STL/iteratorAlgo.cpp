#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;

void Doubleprint(int a) {
    cout << 2 *a << " " <<  endl;
}

bool CheckEven(int a) {
 return a%2== 0;   
}

int main () {
vector <int> arr(6);
// arr[0] = 10;
// arr[1] = 50;
// arr[2] = 30;
// arr[3] = 40;
// arr[4] = 50;
// arr[5] = 60;
arr[0] = 10;
arr[1] = 50;
arr[2] = 21;
arr[3] = 41;
arr[4] = 2;
arr[5] = 7;

// for_each(arr.begin(),arr.end(),Doubleprint); 
// int target = 40;

// auto it = find(arr.begin(),arr.end(), target);
// cout << *it << endl;

// auto it = find_if(arr.begin(),arr.end(),CheckEven);
// cout << *it << endl;

// int it = count_if(arr.begin(),arr.end(),CheckEven);
// cout << it << endl;

// int target = 50;
// int it = count(arr.begin(),arr.end(),target);
// cout << it << endl;

// sort(arr.begin(),arr.end());

// for (int a : arr)
// {
//     cout << a << endl;
// }
// cout << *(arr.begin()) << endl;

// rotate(arr.begin(),arr.begin() + 3, arr.end());
// for (int a : arr)
// {
//     cout << a << endl;
// }


// auto it = unique(arr.begin(), arr.end());
    // it iterator k phle saaare unique element hai
    // it k baad saare duplicate element hai 
//     arr.erase(it, arr.end());
//     for(int a: arr) {
//         cout << a << " ";
//     }

    auto it = partition(arr.begin(), arr.end(), CheckEven);

    for(int a: arr) {
        cout << a << " ";
    }

}