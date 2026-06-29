#include <iostream>
#include <queue>

using namespace std ;
 
int main() {
// queue <int> q;
// insertion it use FIFO  Principles
// q.push(10);
// q.push(20);
// q.push(30);
// q.push(40);
// q.push(50);

// cout << q.size() << endl ;// find size
// q.pop();
// cout << q.size() << endl ;

// if (q.empty() == true){

//     cout << "Queue is empty" << endl ;
// }
// else {

//     cout << "Queue is not empty" << endl ;
// }
// cout << "Front - >"<<q.front() << endl ;
// cout << "Back - >" <<q.back() << endl ;

queue <int> first;
queue <int> second;

first.push(30);
first.push(20);
first.push(10);

second.push(300);
second.push(200);
second.push(100);

first.swap(second);
cout << first.front() << " " << first.back() << endl ;
}