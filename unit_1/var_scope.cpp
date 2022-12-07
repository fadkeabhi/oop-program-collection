#include<iostream>

using namespace std;
 
// global variable
int a = 5;
 
void func()
{
  int a = 1;
  // creating new local variable with same name

cout<<"value from local scope : "<<a<<endl;

cout<<"Value from global scope : "<<::a<<endl;

//cout<<b;
// above commented code will give an error . because cannot access b variable here.
}


int main()
{
int b = 5;
//variable with local scope of main function.
    func();
}