#include <iostream>
#include <vector>
using namespace std ;

int main(){
 vector <int> marks;
 vector <int> first;
 vector <int> second;

 //vector <int> marks(5,-1); // here array size 5 and all elemets are -1
//  vector <int> miles(10); // we can set space 

 marks.push_back(10);
 marks.push_back(20);
 marks.push_back(30);
 marks.push_back(36);
//  marks.pop_back(); // remove the last element
//  cout << *(marks.begin()) <<" "<<  endl; // find the fast elemet
//  cout << (marks.back()) <<" "<<  endl; // access the last elemet
//  cout << (marks.front()) <<" "<<  endl; // access the fast elemet
//  cout << marks.size() <<  endl; // find the size of array
//  cout << miles.size() <<  endl;


// if (marks.empty() == true) {
//     cout << "Vector is empty" << endl; // check it is empty or not 
// }
// else {
//         cout << "Vector is not empty" << endl;

// }

// marks[1] = 35 ;
    // cout << marks[1] << endl; // both are same find the index value 
    // cout << marks.at(1) << endl;

    // marks.reserve(10); //  allocate 10 vector 

    // cout << marks.capacity() << endl; // find the capacity
    // cout << marks.max_size() << endl; it is based on your PC how many vector it can store 

    // marks.clear(); clear all vector 

    first.push_back(41);
    first.push_back(45);
    first.push_back(14);
    first.push_back(54);

    second.push_back(77);
    second.push_back(87);
    second.push_back(89);
    second.push_back(12);

    // first.swap(second);

    // cout << first[0] << " " << first[1] << " "  << first[2] << " "  << first[3] << endl;
    //  for (int i : first) {
    //     cout << i << " " << endl; 
    //  } // 
    //  for (int j : second) {
    //     cout << j << " " << endl; 
    //  }
    // Traversingthe vector using Iterator
    //create an iterator
    // vector <int>::iterator it = first.begin();

    // while (it =! first.end())
    // {
    //     cout << *it << " " ;
    //     it ++ ;
    // }
    // 2d array vector 
    vector<vector<int>> arr (5,vector<int>(4,0));
    // int total_rows = arr.size();
    // int total_cols = arr[0].size();

}