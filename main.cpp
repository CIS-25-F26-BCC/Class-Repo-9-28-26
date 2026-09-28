#include <iostream>

using namespace std;

void thisFunctionTakesAPointer(int * ptr) {
    *ptr += 1;
}

void thisFunctionTakesAReference(int& ref) {
    ref += 1;
}

int main() {
    int x = 5;

    cout << "\n\n The value of x is " << x << "\n\n";

    cout << "\n\n The address of x is " << &x << "\n\n";
    int * y = &x;
    cout << "\n\n The value of y is " << y << "\n\n";

    cout << "\n\n The address of y is " << &y << "\n\n";

    x = 6;

    cout << "\n\n The value of x is now " << x << "\n\n";

    *y = 3;

    cout << "\n\n The value of x is NOW " << x << "\n\n";

    cout << "\n\n Whoaaaaa" << &(*y) << "\n\n";

    int * z = nullptr;
    int a = 99;

    z = &a;

    thisFunctionTakesAPointer(z);

    cout << "\n\n a is now: " << a << "\n\n";

    thisFunctionTakesAReference(a);

    cout << "\n\n a is now: " << a << "\n\n";
    

    return 0;
}