#include <iostream>
using namespace std;

int main() {
    double marks, sum = 0;
    int count = 0;

    cout << "Enter marks (-1 to stop): ";
    cin >> marks;

    while (marks != -1) {
        sum += marks;
        count++;
        cin >> marks;
    }

    if (count > 0)
        cout << "Average = " << sum / count << endl;
    else
        cout << "No marks entered." << endl;

    return 0;
}
