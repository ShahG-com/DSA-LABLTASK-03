#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int matrix[SIZE][SIZE];
    int transpose[SIZE][SIZE];

    cout << "Enter 9 elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
    cin >> matrix[i][j];
    }
    }

    for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
    transpose[j][i] = matrix[i][j];
    }
    }
    cout << "The transposed matrix is:" << endl;
    for (int i=0; i<SIZE; i++) {
    for (int j=0; j<SIZE; j++) {
    cout << transpose[i][j] << " ";
    }
        cout<<endl;
    }

    return 0;
}
