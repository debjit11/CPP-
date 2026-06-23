#include <iostream>
using namespace std ;

class Student{ //class creation

    public: //properties / data members
    int age ;
    int height;
    int weight ;
    string name ;

    // Constructor 
    Student (){ // default cons 
        cout << "I am inside no param constructor" << endl;
            this->age = 0;
            this->weight = 3;
            this->height = 45;
            this->name = "dummy";
    }
    Student (int myAge, int myWeight, int myHeight, string myName):age(myAge), weight(myWeight), height(myHeight), name(myName){ // parameter means input 
        cout << "I am inside param constructor" << endl;
  
    }
    
    //behaviours / member functions
    void running() {
            cout << "I am Running" << endl;
        }
    void studying() {
            cout << name << " is studying" << endl;
        }
    ~Student (){
        cout << "I am inside destructor " << endl ;
    }


};
int main(){

    //Object creation 
    //Static way
    // Student s1 ;
    // s1.age = 45;
    // s1.height = 180;
    // s1.weight = 60;
    // s1.name ="Debjit";
    // s1.running();

    //Dynamic way
    // Student *s = new Student();
    // s->age = 74;
    // s->height = 54;
    // s->running();
//Static way
    // Student s;
//Dynamic way
    // Student *s = new Student();
//Static way    
    // Student y(10,25,65,"Debjit");
//Dynamic way
    // Student *s = new Student(10,25,65,"Debjit");
    
    // cout << s->age << endl;
    // cout << s->weight << endl;
    // cout << s->height << endl;
    // cout << s->name << endl;
    Student *s = new Student();
    delete s ;

    return 0;
}