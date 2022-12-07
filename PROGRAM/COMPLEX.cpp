

#include <iostream>

using namespace std;


class Complex
{
    float x;    //x is real part
    float y;    //y is an imaginary part
    
    public:
    Complex()
    {
        x=0;
        y=0;
    }
    Complex(float real, float img)
    {
        x=real;
        y=img;
        
    }
    Complex operator +(Complex );
    void display();
    
};

Complex Complex :: operator +(Complex c)
{
    Complex temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return(temp);
}

void Complex :: display()
{
    cout<<x<<"+i"<<y<<"\n";
}    



int main()
{
    Complex C1, C2, C3;
    C1=Complex(2.1,1.5);
    C2=Complex(3.2,5.1);
    C3=C1+C2;
    cout<<"\n C1=";
    C1.display();
    cout<<"\n C2=";
    C2.display();
    cout<<"\n C3=";
    C3.display();
    
    return 0;
}
