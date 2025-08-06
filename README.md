# EXPERIMENT - 8 - MULTIDIMENSIONAL ARRAYS IN C++

# Aim: To study and implement C++ Multidimensional Arrays with various matrix operations.

## Apparatus: VS Code or any C++ Compiler.

## Theory:

**Multidimensional Arrays** are advanced data structures in C++ that allow storing data in multiple dimensions, most commonly used for matrix operations and mathematical computations. Understanding these concepts is essential for scientific computing, graphics programming, and algorithmic problem-solving.

### Multidimensional Arrays in C++:

**Multidimensional Arrays** are arrays of arrays that provide a way to organize data in rows and columns (2D) or even higher dimensions. They offer:

* **Matrix Representation**: Natural way to represent mathematical matrices and tables
* **Contiguous Memory**: Elements are stored in row-major order for optimal cache performance
* **Direct Access**: O(1) access time using row and column indices
* **Mathematical Operations**: Foundation for linear algebra operations

```cpp
int matrix[3][3];                    // Static 2D array
int dynamicMatrix[rows][cols];       // Variable-length array 
vector<vector<int>> stlMatrix;       // Dynamic 2D array using STL (Standard Template Library)
```

### Key Matrix Operations:

**Matrix operations** form the core of linear algebra and are widely used in:

* **Mathematical Computations**: Addition, multiplication, transpose operations
* **Graphics Programming**: Transformations, rotations, and scaling
* **Data Analysis**: Statistical computations and data processing
* **Scientific Computing**: Solving systems of equations and simulations

### Matrix Operations Covered:

1. **Basic Operations**: Input, display, and element access
2. **Arithmetic Operations**: Matrix addition and multiplication
3. **Transformation Operations**: Matrix transpose
4. **Analysis Operations**: Diagonal element processing and comparison
5. **Validation**: Dimension checking and operation feasibility

### Why This Matters:

Mastering multidimensional arrays is crucial for:

* **Scientific Computing**: Foundation for numerical methods and simulations
* **Graphics Programming**: 3D transformations and computer graphics
* **Machine Learning**: Data representation in neural networks and algorithms
* **Engineering Applications**: Signal processing and control systems
* **Game Development**: 2D grids, tile maps, and spatial data structures

## Programs:

### 1. Take Input and Display Matrix Elements

---

**Description:** Fundamental program demonstrating matrix input and display operations using a 3x3 static array.

**Algorithm:**
1. Declare a 3x3 integer matrix
2. Prompt user to enter matrix elements
3. Use nested loops to read elements row by row
4. Store each element in the appropriate matrix position
5. Display the complete matrix in proper row-column format

**Sample Output:**
```
Enter The elements of the matrix : 1 2 3 4 5 6 7 8 9 
1 2 3 
4 5 6 
7 8 9 
```

---

### 2. Addition of Matrices

---

**Description:** Implements matrix addition with dynamic sizing and dimension validation for two matrices.

**Algorithm:**
1. Input dimensions for both matrices from the user
2. Validate that both matrices have identical dimensions
3. Create a 3D array to store both input matrices
4. Read elements for both matrices using nested loops
5. Display both input matrices for verification
6. Perform element-wise addition: result[i][j] = mat1[i][j] + mat2[i][j]
7. Display the resulting sum matrix

**Sample Output:**
```
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

The addition of the matrices is : 
5 5 
5 5 
```

---

### 3. Multiplication of Matrices

---

**Description:** Implements matrix multiplication with proper dimension validation and the standard multiplication algorithm.

**Algorithm:**
1. Input dimensions for both matrices
2. Validate multiplication feasibility (columns of first = rows of second)
3. Create separate arrays for both matrices and result matrix
4. Initialize result matrix elements to zero
5. Input elements for both matrices
6. Apply matrix multiplication formula: result[i][j] = Σ(mat1[i][k] × mat2[k][j])
7. Display input matrices and the multiplication result

**Sample Output:**
```
Enter the dimension (rows) of matrix 1 : 2
Enter the dimension (columns) of matrix 1 : 3
Enter the dimension (rows) of matrix 2 : 3
Enter the dimension (columns) of matrix 2 : 2

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
```

---

### 4. Matrix Transpose

---

**Description:** Computes and displays the transpose of a matrix using dynamic sizing with vector implementation.

**Algorithm:**
1. Input matrix dimensions from the user
2. Create a 2D vector to store the matrix
3. Read matrix elements using nested loops
4. Display the original matrix
5. Compute transpose by swapping row and column indices
6. Display the transposed matrix where result[j][i] = original[i][j]

**Sample Output:**
```
Enter the number of rows for the matrix: 2
Enter the number of columns for the matrix: 3

Enter elements of the matrix-
Enter the element at (1, 1): 1
Enter the element at (1, 2): 2
Enter the element at (1, 3): 3
Enter the element at (2, 1): 4
Enter the element at (2, 2): 5
Enter the element at (2, 3): 6

The elements of the matrix are:
1 2 3 
4 5 6 

The transpose of the matrix is:
1 4 
2 5 
3 6 
```

---

### 5. Diagonal Addition

---

**Description:** Calculates the sum of diagonal elements in a square matrix with validation for square matrix requirement.

**Algorithm:**
1. Input matrix dimensions and validate for square matrix (rows = columns)
2. Read matrix elements from the user
3. Display the complete matrix
4. Calculate main diagonal sum: sum += matrix[i][i] for i = 0 to n-1
5. Optionally calculate secondary diagonal sum: sum += matrix[i][n-1-i]
6. Display the diagonal sum result

**Sample Output:**
```
Enter the dimension (rows) of matrix  : 3
Enter the dimension (coloumns) of matrix  : 3

Enter elements of matrix- 
Enter the element 1 , 1 : 1
Enter the element 1 , 2 : 2
Enter the element 1 , 3 : 3
Enter the element 2 , 1 : 4
Enter the element 2 , 2 : 5
Enter the element 2 , 3 : 6
Enter the element 3 , 1 : 7
Enter the element 3 , 2 : 8
Enter the element 3 , 3 : 9

The elements of the matrix are 
1 2 3 
4 5 6 
7 8 9 

The sum of diagonal elements is: 15
```

---

### 6. Compare Elements (First Row vs Second Row)

---

**Description:** Compares corresponding elements between the first and second rows of a matrix with detailed analysis.

**Algorithm:**
1. Input matrix dimensions and validate minimum 2 rows requirement
2. Read all matrix elements from the user
3. Display the complete matrix
4. Compare each element: first_row[j] with second_row[j]
5. Categorize comparisons as greater, lesser, or equal
6. Display detailed position-wise comparison results
7. Provide summary statistics of comparison results

**Sample Output:**
```
Enter the dimension (rows) of matrix : 3
Enter the dimension (columns) of matrix : 4

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
```

---

## Key Learning Outcomes:

1. **Matrix Fundamentals**: Understanding 2D array structure and memory layout
2. **Dynamic Sizing**: Working with variable-length arrays and user-defined dimensions
3. **Mathematical Operations**: Implementing standard matrix operations correctly
4. **Input Validation**: Ensuring operation feasibility through dimension checking
5. **Algorithm Implementation**: Converting mathematical formulas into efficient code
6. **Memory Management**: Optimizing array access patterns for better performance

## Applications:

* **Linear Algebra**: Solving systems of equations and matrix computations
* **Graphics Programming**: 3D transformations and geometric operations
* **Scientific Computing**: Numerical analysis and simulation algorithms
* **Data Science**: Matrix operations for machine learning and statistics
* **Game Development**: Grid-based games and spatial calculations 
