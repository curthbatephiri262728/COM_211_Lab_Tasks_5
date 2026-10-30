#include <iostream>
using namespace std;
 
int main() {
    int rows, cols;
 
    // Ask for the rows mpaka user gives a value from 1 to 3
    cout << "Enter number of rows (1 to 3): ";
    cin >> rows;
    while (rows < 1 || rows > 3) {
        cout << "Invalid. chonde Enter rows 1 to 3: ";
        cin >> rows;
    }
 
    // Ask for the columns mpaka the user gives a value from 1 to 3
    cout << "Enter number of columns (1 to 3): ";
    cin >> cols;
    while (cols < 1 || cols > 3) {
        cout << "Invalid. chonde Enter columns (1 to 3): ";
        cin >> cols;
    }
 
    // Dynamically allocate the 2D array of doubles
    double** arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }
 
    // loops to assign values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value for element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
 
    // loops to output values
    cout << "\nThe array values are:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
 
    // Free the memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;
 
    return 0;
}