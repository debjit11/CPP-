#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main (){
    // creation
    map <int,string> table;
    // insertion
    table.insert(make_pair(1,"India"));
    table.insert(make_pair(3,"Dubai"));
    table.insert(make_pair(2,"USA"));

    map <string,string> table2;
    table2.insert(make_pair("en", "England"));

    pair <string,string> p;
    p.first = "Br";
    p.second = "Brazil";
    table2.insert(p);

    cout << table.size() << endl;
    cout << table2.size() << endl;

    if(table2.count("in") == 0) {
        cout << "Key not found" << endl;
    }
    if(table2.count("in") == 1) {
        cout << "key found" << endl;
    }

    if(table2.find("im") != table2.end() ) {
        cout << "Key Found" << endl;
    }
    else {
        cout << "Key not found" << endl;
    }

    table.erase(table.begin(),table.end());
        cout << table.size() << endl;
        
    if(table2.empty() == true) {
        cout << "map is empty" << endl;
    }
    else {
        cout << "map is not empty" << endl;
    }
}
