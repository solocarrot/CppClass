#include <iostream>

using namespace std;

int main() {
    void printReverseDigit(int n);
    void printDigit(int n);

    int cnt, val;
    cin >> cnt;

    for (int i = 0; i < cnt; ++i) {
        cin >> val;

        cout << "Backward : ";
        printReverseDigit(val);

        cout << endl << "Forward : ";
        printDigit(val);
        cout << endl;
    }
    return 0;
}

void printReverseDigit(int n) {
    if (n >= 10) {
        cout << n % 10 << " ";
        printReverseDigit(n / 10);
    }
    else {
        cout << n ;
    }
}

void printDigit(int n) {
    if (n >= 10) {
        printDigit(n / 10);
    }
    std::cout << n % 10 << " ";
}