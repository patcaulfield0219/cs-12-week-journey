#include <iostream>
using namespace std;

// Task 1
void changeValue(int x) {
    x = 100;
    // 將 x 改成 100
}

// Task 2
void changeReference(int& x) {
    x = 100;
    // 將 x 改成 100
}

int main() {
    int a = 10;
    int b = 10;

    changeValue(a);
    changeReference(b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}