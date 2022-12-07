#include<iostream>  
using namespace std;  
class Results{  
        
    int num;  //by default private  
    public:  
        
    void InData();  
    void OutData();  
        
};  
void Results :: InData()  
{  
    cout<< "Enter any Integer value" <<endl;   
    cin>>num;  
        
}  
void Results :: OutData()  
{  
    cout<< "The value is " << num <<endl;  
}  
     
int main(){  
    Results  obj;       
    obj.InData();  
    obj.OutData();   
    
//    cout<<obj.num;
// above commented code will give an error becoause num is declared in private scope.
    return 0;  
}  
