// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 8D

#include <iostream>
#include <cstdio>
using namespace std ;

int main() {

    int rows1 , cols1;
    
    printf("Enter the dimension (rows) of matrix  : ");
    cin >> rows1 ;
    printf("Enter the dimension (coloumns) of matrix  : ");
    cin >> cols1;
    
    if(rows1 != cols1){
        printf("Rows should be equal to coloumns ");
        exit(0);
    }
    
     int mat[rows1][cols1];
         printf("\nEnter elements of matrix- \n");
         for(int i = 0 ; i < rows1 ; i++){
            for(int j = 0 ; j < cols1 ; j++){
                printf("Enter the element %d , %d : " , i+1 , j+1);
                cin >> mat[i][j];
            }
        }
        printf("\nThe elements of the matrix are \n");
        for(int i = 0 ; i < rows1 ; i++){
            for(int j = 0 ; j < cols1 ; j++){
               
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    
    int add = 0;
   
       for(int i = 0 ; i < rows1 ; i++){
        for(int j = 0 ; j < cols1 ; j++){
           if(i == j){
               add = add+ mat[i][j];
           }
        }
        cout << "\n";
    }
    printf("The addition of the diagonal elements is : %d", add);
    


    return 0;
}
    
 
    
/*
OUTPUT ==> 

Enter the dimension (rows) of matrix  : 2
Enter the dimension (coloumns) of matrix  : 2

Enter elements of matrix- 
Enter the element 1 , 1 : 1
Enter the element 1 , 2 : 3
Enter the element 2 , 1 : 3
Enter the element 2 , 2 : 1

The elements of the matrix are 
1 3 
3 1 



The addition of the diagonal elements is : 2

=== Code Execution Successful ===


Enter the dimension (rows) of matrix  : 3
Enter the dimension (coloumns) of matrix  : 3

Enter elements of matrix- 
Enter the element 1 , 1 : 3
Enter the element 1 , 2 : 3
Enter the element 1 , 3 : 3
Enter the element 2 , 1 : 3
Enter the element 2 , 2 : 3
Enter the element 2 , 3 : 3
Enter the element 3 , 1 : 3
Enter the element 3 , 2 : 3
Enter the element 3 , 3 : 3

The elements of the matrix are 
3 3 3 
3 3 3 
3 3 3 




The addition of the diagonal elements is : 9

=== Code Execution Successful ===
*/
