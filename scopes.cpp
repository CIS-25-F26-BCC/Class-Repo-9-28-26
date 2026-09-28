#include <iostream>

using namespace std;

int* getAddress() {
    int x = 5;
    cout << "\n\nWhat's the address of x? It's " << &x << "\n\n";
    return &x;
}

int main() {

    int * x = new int[];

    cout << "\n\nWhat's the address of x? It's " << getAddress() << "\n\n";
    
    return 0;
}