#include <iostream>
using namespace std;
int main(){
    int day;
    cout << "Enter Day Number"<< endl;
    cin>>day;
     switch (day)
     {
     case 1: cout << "Sunday"<< endl;
        
        break;
     case 2: cout << "Monday"<< endl;
        
        break;
     case 3: cout << "Tuesday"<< endl;
        
        break;
     case 4: cout << "Wednesday"<< endl;
        
        break;
     case 5: cout << "Thusday"<< endl;
        
        break;
     case 6: cout << "Friday"<< endl;
        
        break;
     case 7: cout << "Saterday"<< endl;
        
        break;
     
     default: cout << "Give currect day number ex: 1 to 7 "<< endl; 
        
     }
}