



#include <iostream>
using namespace std;

void area(int);
void area(float, float);

int main() 
{
area(4);
area(5.5, 6.6);
return 0;
}


void area(int s)
{
    int a=s*s;
    cout<<"\narea of square is: "<<a;
}

void area(float l, float b)
{
    int a=l*b;
    cout<<"\narea of rectangle is: "<<a;
}