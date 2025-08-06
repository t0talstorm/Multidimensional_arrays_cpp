// Name: Aditya Sinha
// PRN: 24070123006
//Batch: EnTc A1
//Experiment: 8A

#include <iostream>
using namespace std ;

int main() {
    cout << "Enter The elements of the matrix : ";
    int mat[3][3];
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        cin >> mat[i][j];
        }
    }
    
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

/*
OUTPUT :

Enter The elements of the matrix : 1 2 3 4 5 6 7 8 9 
1 2 3 
4 5 6 
7 8 9 

=== Code Execution Successful ===

Enter The elements of the matrix : 4 5 6 1 6 7 8 9 1
4 5 6 
1 6 7 
8 9 1 


=== Code Execution Successful ===

*/
