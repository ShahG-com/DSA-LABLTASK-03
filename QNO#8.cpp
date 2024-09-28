#include <iostream>

using namespace std;

int main() {
    int matrix[4][4], searchValue, found = 0;
    cout << "Enter elements of the 4x4 matrix:\n";
    for (int i = 0; i < 4; i++)  {
    for (int j = 0; j < 4; j++) {
    cin >> matrix[i][j];
    }
    }
    cout << "Enter the value to be searched: ";
    cin >> searchValue;
    for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
    if (matrix[i][j] == searchValue) 
    {
     found = 1;
     cout << "Value found at row " << i + 1 << ", column " << j + 1 << endl;
     break;
    }
    }
    if (found) {
     break;
    }
    }

    if (!found) 
    {
    cout << "Value not found in the matrix." << endl;
    }

    return 0;
}
