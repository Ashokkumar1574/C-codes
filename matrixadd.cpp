#include <iostream>  
using namespace std;   
void matrixAddition(int A[][3], int B[][3], int C[][3], int rows, int cols) {  
    for (int i = 0; i < rows; i++) {  
       for (int j = 0; j < cols; j++) {  
            C[i][j] = A[i][j] + B[i][j];  
        }  
    }  
}  
void displayMatrix(int matrix[][3], int rows, int cols) {  
    for (int i = 0; i < rows; i++) {  
        for (int j = 0; j < cols; j++) {  
            cout << matrix[i][j] << " ";  
        }  
        cout << endl;  
    }  
}  
  
int main() {  
    const int rows = 3;  
    const int cols = 3;  
  
    int matrixA[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};  
    int matrixB[rows][cols] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};  
    int matrixC[rows][cols];   
    matrixAddition(matrixA, matrixB, matrixC, rows, cols);  
    cout << "Matrix A:" << endl;  
    displayMatrix(matrixA, rows, cols);  
  
    cout << "Matrix B:" << endl;  
    displayMatrix(matrixB, rows, cols);  
  
    cout << "Matrix C (Result of Addition):" << endl;  
    displayMatrix(matrixC, rows, cols);  
  
    return 0;  
}  