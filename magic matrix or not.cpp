#include <iostream>
#include <vector>

using namespace std;

bool isMagicSquare(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    int sum = 0;  diagonal sums)

    // Calculating sum of the first row
    for (int j = 0; j < n; ++j) {
        sum += matrix[0][j];
    }
    for (int i = 1; i < n; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += matrix[i][j];
        }
        if (rowSum != sum) return false;
    }
    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < n; ++i) {
            colSum += matrix[i][j];
        }
        if (colSum != sum) return false;
    }
    int diagSum1 = 0;
    for (int i = 0; i < n; ++i) {
        diagSum1 += matrix[i][i];
    }
    if (diagSum1 != sum) return false;
    int diagSum2 = 0;
    for (int i = 0; i < n; ++i) {
        diagSum2 += matrix[i][n - 1 - i];
    }
    if (diagSum2 != sum) return false;

    return true; 
}

int main() {
    int n;
    cout << "Enter the order of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    if (isMagicSquare(matrix)) {
        cout << "The given matrix is a magic square.\n";
    } else {
        cout << "The given matrix is not a magic square.\n";
    }

    return 0;
}
