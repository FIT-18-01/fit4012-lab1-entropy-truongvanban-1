#include <iostream>
using namespace std;

// Hàm gcd (bắt buộc để pass autograder)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Euclid mở rộng
int extended_euclid(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }

    int x1, y1;
    int g = extended_euclid(b, a % b, x1, y1);

    x = y1;
    y = x1 - (a / b) * y1;

    return g;
}

// Nghịch đảo modulo
int mod_inverse(int a, int m) {
    if (gcd(a, m) != 1) return -1; // thêm dòng này

    int x, y;
    extended_euclid(a, m, x, y);

    return (x % m + m) % m;
}

// Main (in đúng format tối giản)
int main() {
    int a, m;
    cin >> a >> m;

    cout << mod_inverse(a, m) << endl;

    return 0;
}