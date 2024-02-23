#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int spaces = n - 1;
    int stars = 1;

    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }

        cout << endl;
        spaces--;
        stars += 2;
    }

    spaces = 1;
    stars = n * 2 - 3;

    for (int i = 1; i <= n - 1; i++) {
        // Print spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 1; j <= stars; j++) {
            cout << "* ";
        }

        cout << endl;
        spaces++;
        stars -= 2;
    }

    return 0;
}
