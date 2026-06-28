#include <iostream>
#include <list>

using namespace std ;

int main(){
    list <int> mylist ;
    mylist.push_back(12);
    mylist.push_back(13);
    mylist.push_back(14);
    mylist.push_back(15);
    mylist.push_front(47);
    // mylist.pop_front();

    // cout << mylist.size() << endl;
    // cout << *(mylist.begin()) << endl;
    // cout << mylist.back() << endl;

    // list<int>::iterator it = mylist.begin();

    // while (it != mylist.end())
    // {
    //     cout << *it << endl;
    //     it ++ ;
    // }

    // mylist[1] = 34;
    list<int>::iterator it = mylist.begin();

    while (it != mylist.end())
    {
        cout << *it << endl;
        it ++ ;
    }

    
}