#include <iostream> 
using namespace std;

int main(){
    int *p = new int(100);
    cout << *p << endl;
    *p = 500;
    cout << *p << endl;
    delete p;
    p = nullptr;
    if(p == nullptr){
        cout << "Release success" << endl;
    }

    return 0;
}