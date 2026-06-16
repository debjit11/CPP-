#include <iostream>
using namespace std ;

int main(){
    // decalre
    string name ;
    name.push_back('D');
    name.push_back('e');
    name.push_back('b');
    name.push_back('j');
    name.push_back('i');
    name.push_back('t');
     cout << name << endl;
    //initialisation
    string sarname = "Das" ;
    cout << sarname << endl;

    //append 
    name.append(sarname);
    cout << name << endl;

    //insert 
    name.insert(3,sarname);// in 3 index sarname will print 
    
    cout << name << endl;
     string str = "statement";
    cout << str.substr(2, 3) << endl;//  from 2 index take 3 next word will print 

     string a = "My name is Debjit";
    string b = "Das";

    int ans = a.find(b);

    if(ans == string::npos) {
        cout << "b string not found in a string" << endl;
        //cout << string::npos << endl;
     } 
    else {
        cout << "Found" << endl;
    }

    string a = "love";
    string b = "loveaesrgwrthw";

    if (a.compare(b) == 0)
    {
        cout << "strings are equal" << endl;
    }
    else
    {
        cout << "strings are not equal" << endl;
    }

    return 0;
}