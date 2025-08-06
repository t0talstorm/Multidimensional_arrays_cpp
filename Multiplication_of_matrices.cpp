// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 8C

#include <iostream>
#include <cstdio>
using namespace std ;

int main() {
    int rows1, cols1, rows2, cols2;
    
    printf("Enter the dimension (rows) of matrix 1 : ");
    cin >> rows1;
    printf("Enter the dimension (columns) of matrix 1 : ");
    cin >> cols1;
    
    printf("Enter the dimension (rows) of matrix 2 : ");
    cin >> rows2;
    printf("Enter the dimension (columns) of matrix 2 : ");
    cin >> cols2;
    

    if(cols1 != rows2){
        printf("Matrix multiplication not possible. Columns of matrix 1 must equal rows of matrix 2.\n");
        exit(0);
    }
    
    int mat1[rows1][cols1];
    int mat2[rows2][cols2];
    int result[rows1][cols2];
    
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            result[i][j] = 0;
        }
    }
    
    printf("\nEnter elements of matrix 1:\n");
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            printf("Enter the element %d, %d : ", i+1, j+1);
            cin >> mat1[i][j];
        }
    }
    
    printf("\nEnter elements of matrix 2:\n");
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            printf("Enter the element %d, %d : ", i+1, j+1);
            cin >> mat2[i][j];
        }
    }
    
    printf("\nThe elements of matrix 1 are:\n");
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols1; j++){
            cout << mat1[i][j] << " ";
        }
        cout << "\n";
    }
    
    printf("\nThe elements of matrix 2 are:\n");
    for(int i = 0; i < rows2; i++){
        for(int j = 0; j < cols2; j++){
            cout << mat2[i][j] << " ";
        }
        cout << "\n";
    }

    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            for(int k = 0; k < cols1; k++){
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("\nThe multiplication of the matrices is:\n");
    for(int i = 0; i < rows1; i++){
        for(int j = 0; j < cols2; j++){
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}

/*
OUTPUT == 

Enter the dimension (rows) of matrix 1 : 2
Enter the dimension (columns) of matrix 1 : 3
Enter the dimension (rows) of matrix 2 : 3
Enter the dimension (columns) of matrix 2 : 2

Enter elements of matrix 1:
Enter the element 1, 1 : 1
Enter the element 1, 2 : 2
Enter the element 1, 3 : 3
Enter the element 2, 1 : 4
Enter the element 2, 2 : 5
Enter the element 2, 3 : 6

Enter elements of matrix 2:
Enter the element 1, 1 : 7
Enter the element 1, 2 : 8
Enter the element 2, 1 : 9
Enter the element 2, 2 : 10
Enter the element 3, 1 : 11
Enter the element 3, 2 : 12

The elements of matrix 1 are:
1 2 3 
4 5 6 

The elements of matrix 2 are:
7 8 
9 10 
11 12 

The multiplication of the matrices is:
58 64 
139 154 

=== Code Execution Successful ===

Enter the dimension (rows) of matrix 1 : 2
Enter the dimension (columns) of matrix 1 : 2
Enter the dimension (rows) of matrix 2 : 2
Enter the dimension (columns) of matrix 2 : 2

Enter elements of matrix 1:
Enter the element 1, 1 : 1
Enter the element 1, 2 : 2
Enter the element 2, 1 : 3
Enter the element 2, 2 : 4

Enter elements of matrix 2:
Enter the element 1, 1 : 5
Enter the element 1, 2 : 6
Enter the element 2, 1 : 7
Enter the element 2, 2 : 8

The elements of matrix 1 are:
1 2 
3 4 

The elements of matrix 2 are:
5 6 
7 8 

The multiplication of the matrices is:
19 22 
43 50 

*/
