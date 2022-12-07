#include<iostream>
using namespace std;
class Length{
public:
       int feet,inches;
       Length(){
       	
	   }
	   Length(int f,int i){
	   	feet=f;
	   	inches=i;
	   }
	   void operator ++() //operator function
	   {
	   	 inches++;
	   	 if(inches>=12)
	   	 {
	   	 	inches-=12;
	   	 	feet++;
			}
	   }
	   
	   void output(){
	   	cout<<"length= "<<feet<<"ft "<<inches<<"inches "<<endl;
	   }
};

int main(){
	Length m(5,8);
	m.output();
	++m;//overloaded operator works
	m.output();
	return 0;
}