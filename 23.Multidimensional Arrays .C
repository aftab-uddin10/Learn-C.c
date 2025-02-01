/* 
Access the Elements of a 2D Array
To access an element of a two-dimensional array, you must specify the index number of both the row and column.
This statement accesses the value of the element in the first row (0) and third column (2) of the matrix array.
*/
//Example

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
printf("%d", matrix[0][2]);  // Outputs 2

/*
Change Elements in a 2D Array
To change the value of an element, refer to the index number of the element in each of the dimensions:
The following example will change the value of the element in the first row (0) and first column (0):
*/
//Example

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
matrix[0][0] = 9;
printf("%d", matrix[0][0]);  // Now outputs 9 instead of 1


//Loop Through a 2D Array

//Example

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

int i, j;
for (i = 0; i < 2; i++) {
  for (j = 0; j < 3; j++) {
    printf("%d\n", matrix[i][j]);
  }
}
