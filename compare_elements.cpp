// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 8E

#include <iostream>
#include <cstdio>
using namespace std ;

int main() {
    int rows, cols;
    
    printf("Enter the dimension (rows) of matrix : ");
    cin >> rows;
    printf("Enter the dimension (columns) of matrix : ");
    cin >> cols;
    
    if(rows < 2){
        printf("Matrix must have at least 2 rows for comparison.\n");
        exit(0);
    }
    
    int mat[rows][cols];
    
    printf("\nEnter elements of matrix:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("Enter the element %d, %d : ", i+1, j+1);
            cin >> mat[i][j];
        }
    }
    
    printf("\nThe elements of the matrix are:\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
    
    printf("\nComparison of first row with second row:\n");
    for(int j = 0; j < cols; j++){
        printf("Position %d: ", j+1);
        if(mat[0][j] > mat[1][j]){
            printf("First row element (%d) is greater than second row element (%d)\n", mat[0][j], mat[1][j]);
        }
        else if(mat[0][j] < mat[1][j]){
            printf("First row element (%d) is less than second row element (%d)\n", mat[0][j], mat[1][j]);
        }
        else{
            printf("First row element (%d) is equal to second row element (%d)\n", mat[0][j], mat[1][j]);
        }
    }
    
    int greater = 0, lesser = 0, equal = 0;
    for(int j = 0; j < cols; j++){
        if(mat[0][j] > mat[1][j]) greater++;
        else if(mat[0][j] < mat[1][j]) lesser++;
        else equal++;
    }
    
    printf("\nSummary:\n");
    printf("Elements where first row > second row: %d\n", greater);
    printf("Elements where first row < second row: %d\n", lesser);
    printf("Elements where first row = second row: %d\n", equal);
    
    return 0;
}

/*
OUTPUT == 

Enter the dimension (rows) of matrix : 3
Enter the dimension (columns) of matrix : 4

Enter elements of matrix:
Enter the element 1, 1 : 5
Enter the element 1, 2 : 3
Enter the element 1, 3 : 8
Enter the element 1, 4 : 2
Enter the element 2, 1 : 4
Enter the element 2, 2 : 6
Enter the element 2, 3 : 8
Enter the element 2, 4 : 9
Enter the element 3, 1 : 1
Enter the element 3, 2 : 7
Enter the element 3, 3 : 3
Enter the element 3, 4 : 5

The elements of the matrix are:
5 3 8 2 
4 6 8 9 
1 7 3 5 

Comparison of first row with second row:
Position 1: First row element (5) is greater than second row element (4)
Position 2: First row element (3) is less than second row element (6)
Position 3: First row element (8) is equal to second row element (8)
Position 4: First row element (2) is less than second row element (9)

Summary:
Elements where first row > second row: 1
Elements where first row < second row: 2
Elements where first row = second row: 1

=== Code Execution Successful ===

Enter the dimension (rows) of matrix : 2
Enter the dimension (columns) of matrix : 3

Enter elements of matrix:
Enter the element 1, 1 : 10
Enter the element 1, 2 : 15
Enter the element 1, 3 : 5
Enter the element 2, 1 : 8
Enter the element 2, 2 : 20
Enter the element 2, 3 : 5

The elements of the matrix are:
10 15 5 
8 20 5 

Comparison of first row with second row:
Position 1: First row element (10) is greater than second row element (8)
Position 2: First row element (15) is less than second row element (20)
Position 3: First row element (5) is equal to second row element (5)

Summary:
Elements where first row > second row: 1
Elements where first row < second row: 1
Elements where first row = second row: 1

*/
