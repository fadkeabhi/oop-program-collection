#include <iostream>
using namespace std;
void print(int x) {
cout << " Here is the integer " << x << endl;
}
void print(double  y) {
cout << " Here is the float " << y << endl;
}
void print(char const *v) {
cout << " Here is the character* " << v << endl;
}
int main() {
print(20);
print(20.30);
print("three");
return 0;
}
