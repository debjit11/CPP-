#include <iostream>
using namespace std ;

int main(){

    class Student{
       public: 
         //properties / data members
        int age;
        int weight;
        int height;
        string name;
        //Constructor
        Student() {
            cout << "I am inside no param constructor" << endl;
            this->age = 0;
            this->weight = 3;
            this->height = 45;
            this->name = "dummy";
        }
        //parameterised constructor
        Student(int myAge, int myWeight, int myHeight, string myName):age(myAge), weight(myWeight), height(myHeight), name(myName) {
            cout << "I am inside param constructor" << endl;
        }
      //behaviours / member functions
        void running() {
            cout << "I am Running" << endl;
        }
        void studying() {
            cout << name << " is studying" << endl;
        }
   ~Student() {
            cout << "I am inside destructor " << endl;
        }
    };
    return 0;
}