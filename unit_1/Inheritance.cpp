// C++ program to demonstrate inheritance

#include <iostream>
using namespace std;

// base class
class Animal {


    void nobark() {
        cout << "I can't bark!" << endl;
    } // default private 
    
   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};

// derived class
class Dog : public Animal {
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main() {
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();
    
//    dog1.nobark();
// above commented code will give an error because nobark is declared with private scope so it is not ingerited.

    return 0;
}