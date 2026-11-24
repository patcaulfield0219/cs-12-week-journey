#include <iostream> 
using namespace std;

int main(){
    int a = 15;
    int b = 30;
    int* p = &a;

    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    *p = 100;
    p = &b;
    *p = 200;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}