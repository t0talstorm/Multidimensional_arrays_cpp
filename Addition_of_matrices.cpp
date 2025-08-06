// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 8B

#include <iostream>
#include <cstdio>
using namespace std ;

int main() {
    int rows = 3;
    int cols = 3;
    int rows1 , cols1 , rows2 , cols2;
    
    printf("Enter the dimension (rows) of matrix 1 : ");
    cin >> rows1 ;
    printf("Enter the dimension (coloumns) of matrix 1 : ");
    cin >> cols1;
    
    printf("Enter the dimension (rows) of matrix 2 : ");
    cin >> rows2;
    printf("Enter the dimension (coloumns) of matrix 2 : ");
    cin >> cols2;
    
    if(rows1 != rows2 || cols1 != cols2){
        printf("Please enter correct dimensions");
        exit(0);
    }
    
     int mat[2][rows1][cols1];
     for(int k = 0 ; k < 2 ; k++){
         printf("\nEnter elements of matrix- %d \n", k+1);
         for(int i = 0 ; i < rows1 ; i++){
            for(int j = 0 ; j < cols1 ; j++){
                printf("Enter the element %d , %d : " , i+1 , j+1);
                cin >> mat[k][i][j];
            }
        }
    }
    for(int k = 0 ; k < 2 ; k ++){
        printf("\nThe elements of the %d matrix are \n" , k );
        for(int i = 0 ; i < rows1 ; i++){
            for(int j = 0 ; j < cols1 ; j++){
               
                cout << mat[k][i][j] << " ";
            }
            cout << "\n";
        }
    }
    
   printf("\nThe addition of the matrices is : \n");
    for(int i = 0 ; i < rows1 ; i++){
        for(int j = 0 ; j < cols1 ; j++){
           mat[0][i][j] = mat[0][i][j] + mat[1][i][j];
            cout << mat[0][i][j] << " ";
        }
        cout << "\n";
    }
    


    return 0;
}

/*
OUTPUT == 

Enter the dimension (rows) of matrix 1 : 2
Enter the dimension (coloumns) of matrix 1 : 2
Enter the dimension (rows) of matrix 2 : 2
Enter the dimension (coloumns) of matrix 2 : 2

Enter elements of matrix- 1 
Enter the element 1 , 1 : 1
Enter the element 1 , 2 : 2
Enter the element 2 , 1 : 3
Enter the element 2 , 2 : 4

Enter elements of matrix- 2 
Enter the element 1 , 1 : 4
Enter the element 1 , 2 : 3
Enter the element 2 , 1 : 2
Enter the element 2 , 2 : 1

The elements of the 0 matrix are 
1 2 
3 4 

The elements of the 1 matrix are 
4 3 
2 1 

The addition of the matrices is : 
5 5 
5 5 


=== Code Execution Successful ===

Enter the dimension (rows) of matrix 1 : 2
Enter the dimension (coloumns) of matrix 1 : 3
Enter the dimension (rows) of matrix 2 : 2
Enter the dimension (coloumns) of matrix 2 : 3

Enter elements of matrix- 1 
Enter the element 1 , 1 : 1
Enter the element 1 , 2 : 1
Enter the element 1 , 3 : 1
Enter the element 2 , 1 : 2
Enter the element 2 , 2 : 2
Enter the element 2 , 3 : 2

Enter elements of matrix- 2 
Enter the element 1 , 1 : 1
Enter the element 1 , 2 : 1
Enter the element 1 , 3 : 1
Enter the element 2 , 1 : 2
Enter the element 2 , 2 : 2
Enter the element 2 , 3 : 2

The elements of the 0 matrix are 
1 1 1 
2 2 2 

The elements of the 1 matrix are 
1 1 1 
2 2 2 

The addition of the matrices is : 
2 2 2 
4 4 4 
*/
