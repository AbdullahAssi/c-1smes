#include <iostream>
using namespace std;

bool isIdentityMat(int mat[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j && mat[i][j] != 1) {
                return 0;
            }
            if (i != j && mat[i][j] != 0) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int mat[100][100], n;
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    if (isIdentityMat(mat, n)) {
        cout << "The matrix is an identity matrix." << endl;
    } else {
        cout << "The matrix is not an identity matrix." << endl;
    }
    return 0;
}

