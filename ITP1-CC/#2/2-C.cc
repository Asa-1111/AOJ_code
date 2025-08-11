#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a > b) {
        int t = a;
        a = b;
        b = t;
    }
    if (b > c) {
        int t = b;
        b = c;
        c = t;
    }                       
    if (a > b) {
        int t = a;
        a = b; 
        b = t;
    }

    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
}