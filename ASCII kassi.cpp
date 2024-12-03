#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) {
        cout << "++" << endl;
        cout << "++" << endl;
        return 0;
    }

    // Print the top side
    cout << '+';
    for (int i = 0; i < N; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    // Print the sides
    for (int i = 0; i < N; i++) {
        cout << '|';
        for (int j = 0; j < N; j++) {
            cout << ' ';
        }
        cout << '|' << endl;
    }

    // Print the bottom side
    cout << '+';
    for (int i = 0; i < N; i++) {
        cout << '-';
    }
    cout << '+' << endl;

    return 0;
}