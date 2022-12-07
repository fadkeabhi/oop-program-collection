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
	   Length operator +(Length m){
	     Length r;
	     r.feet=feet+ m.feet;
	     r.inches=inches+m.inches;
	     if(r.inches>=12){
	     	r.inches-=12;
	     	r.feet++;
		 }
		 return r;
	   }
	   
	   void output(){
	   	cout<<"length= "<<feet<<"ft "<<inches<<"inches "<<endl;
	   }
};

int main(){
	Length p(5,8);
	Length q(5,6);
	cout<<"two length:"<<endl;
	p.output();
	q.output();
    Length s=p+q;
    cout<<"Sum: ";
    s.output();
	return 0;
}