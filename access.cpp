#include <iostream>

using namespace std;

class DummyClass {
    private:
        int value;
    public:
        int * ptr;
        int getValue() {
            return value;
        }
        DummyClass() {
            value = 1;
            ptr = &value;
        }
};

int main() {

    DummyClass myObj;

    *(myObj.ptr) = 5;

    cout << "\n\nThe value is... " << myObj.getValue() << "\n\n";
    
    return 0;
}