#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 3;

void input_matrix(int mat1[rows][cols]) {
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> mat1[i][j];
        }
    }
}

void display_matrix(int mat[rows][cols]) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

void add_matrices(int matA[rows][cols], int matB[rows][cols], int res[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            res[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

void matrix_multiple(int matA[rows][cols], int matB[rows][cols], int res[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            res[i][j] = 0; // Initialize the result matrix element to zero
            for (int k = 0; k < cols; ++k) {
                res[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
}


void matrix_transpose(int A[][cols], int AT[][rows]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            AT[j][i] = A[i][j];
        }
    }
}



int main() {
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];
    int multiresult[rows][cols];
	int AT[rows][cols];
   
    cout << "Matrix 1:" << endl;
    input_matrix(matrix1);
    cout << "Matrix 2:" << endl;
    input_matrix(matrix2);

    add_matrices(matrix1, matrix2, result);
    cout << "\nAddition Result:" << endl;
    display_matrix(result);
    
    cout<<"multiple of this matrix"<<endl;
    matrix_multiple(matrix1, matrix2, multiresult);
    display_matrix(multiresult);
    
    cout<<"Transponse of matrix"<<endl;
    matrix_transpose(matrix1, AT);
    display_matrix(AT);

    return 0;
}
