#include <iostream>
using namespace std;

void operate(int matrix1[][100], int matrix2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void operate(int matrix1[][100], int matrix2[][100], int result[][100], int rows1, int cols1, int rows2, int cols2) {
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible with these dimensions." << endl;
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}


void displayMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix1[100][100], matrix2[100][100], result[100][100];
    int rows1, cols1, rows2, cols2;

    cout << "first matrix dimensions:";
    cin >> rows1 >> cols1;

    cout << "elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "second matrix dimensions: ";
    cin >> rows2 >> cols2;

    cout << "elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> matrix2[i][j];
        }
    }

    if (rows1 == rows2 && cols1 == cols2) {
        cout << "sum" << endl;
        operate(matrix1, matrix2, result, rows1, cols1);
        displayMatrix(result, rows1, cols1);
    } else if (cols1 == rows2) {
        cout << "Product" << endl;
        operate(matrix1, matrix2, result, rows1, cols1, rows2, cols2);
        displayMatrix(result, rows1, cols2);
    } else {
        cout << "Neither is possible with these matrices." << endl;
    }

    return 0;
}
