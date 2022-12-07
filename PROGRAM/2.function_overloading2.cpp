#include <iostream>
using namespace std;
void show(int);
void show(float);
void show(int, float);
int main() {
int x = 10;
float y = 255.5;
show(x);
show(y);
show(x, y);
return 0;
}
void show(int variable) {
cout << "The Integer number is : " << variable << endl;
}
void show(float variable) {
cout << "The Float number is: " << variable << endl;
}
void show(int variable1, float variable2) {
cout << "The Integer number is: " << variable1;
cout << " And The Float number is:" << variable2;
}