#include <iostream>
using namespace std;

int main()
 {
    int rows, cols;

    // Telling the user to enter the dimensions
    cout << "Enter number of rows (maximum 3): ";
    cin >> rows;

    cout << "Enter number of columns (maximum 3): ";
    cin >> cols;

    // Now validate the dimensions
    if (rows < 1 || rows > 3 || cols < 1 || cols > 3) {
        cout << "Invalid dimensions!" << endl;
        cout << "Rows and columns must be between 1 and 3."
             << endl;
        return 1;
    }

    // Dynamically allocating a 2D array
    double** array = new double*[rows];

    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    // Inputing values using nested loops
    cout << "\nEnter the elements of the array:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter value [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    //Now displaying the array
    cout << "\nThe elements of the 2D array are:" << endl;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << "\t";
        }
        cout << endl;
    }

    //Now Releasing dynamically allocated memory
    for (int i = 0; i < rows; i++) {
        delete[] array[i];
    }

    delete[] array;

    return 0;
}