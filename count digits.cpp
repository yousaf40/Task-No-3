#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        num = -num;      // ignore the minus sign
    if (num == 0)
        count = 1;       // 0 has one digit

    while (num > 0) {
        num /= 10;
        count++;
    }

    cout << "Digits = " << count << endl;
    return 0;
}
