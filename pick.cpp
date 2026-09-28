#include <iostream>

int* lowerReading(int& first, int& second) {
    if (first <= second) {
        return &first;
    }
    return &second;
}

int main() {
    int indoor = 18;
    int outdoor = 12;
    int* selected = lowerReading(indoor, outdoor);
    std::cout << *selected << '\n';
    *selected = 14;
    std::cout << indoor << " " << outdoor << '\n';
    return 0;
}