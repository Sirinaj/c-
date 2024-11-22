#include <stdio.h>
#include <mkl.h>

int main() {
  // Define the matrix
  double matrix[9] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};

  // Calculate the determinant
  double det = LAPACKE_determinant(matrix, 3);

  // Print the result
  printf("The determinant of the matrix is: %f\n", det);

  return 0;
}
