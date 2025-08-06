// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 7E

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows for the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns for the matrix: ";
    cin >> cols;

    vector<vector<int>> mat(rows, vector<int>(cols));

    cout << "\nEnter elements of the matrix-\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter the element at (" << i + 1 << ", " << j + 1 << "): ";
            cin >> mat[i][j];
        }
    }

    cout << "\nThe elements of the matrix are:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nThe transpose of the matrix is:\n";
    for (int j = 0; j < cols; j++) { 
        for (int i = 0; i < rows; i++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}


/* OUTPUT -->

Enter the number of rows for the matrix: 2
Enter the number of columns for the matrix: 3

Enter elements of the matrix-
Enter the element at (1, 1): 1
Enter the element at (1, 2): 1
Enter the element at (1, 3): 1
Enter the element at (2, 1): 2
Enter the element at (2, 2): 2
Enter the element at (2, 3): 2

The elements of the matrix are:
1 1 1 
2 2 2 

The transpose of the matrix is:
1 2 
1 2 
1 2 


=== Code Execution Successful ===

Enter the number of rows for the matrix: 3
Enter the number of columns for the matrix: 3

Enter elements of the matrix-
Enter the element at (1, 1): 1
Enter the element at (1, 2): 2
Enter the element at (1, 3): 3
Enter the element at (2, 1): 4
Enter the element at (2, 2): 5
Enter the element at (2, 3): 6
Enter the element at (3, 1): 7
Enter the element at (3, 2): 8
Enter the element at (3, 3): 9

The elements of the matrix are:
1 2 3 
4 5 6 
7 8 9 

The transpose of the matrix is:
1 4 7 
2 5 8 
3 6 9 


=== Code Execution Successful ===
*/
