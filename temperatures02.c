#include <stdio.h>
#include <stdlib.h> 

int main(void){
  int capacity = 5;
  int count = 0;
  double *temps = malloc(capacity * sizeof(double));
  if (temps == NULL){
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Enter temperatures (-100.0 to stop): ");
  while (1){
    double value;
    if (scanf("%lf", &value) != 1){
      printf("Invalid input.\n");
      free(temps);
      return 1;
    }

    if (value == -100.0) break;

    if (count == capacity){
      int new_capacity = capacity * 2;
      double *new_array = malloc(new_capacity * sizeof(double));
      if (new_array == NULL){
        printf("Memory allocation failed.\n");
        free(temps);
        return 1;
      }

      for (int i = 0; i < count; i++){
        new_array[i] = temps[i];
      }

      free(temps);
      temps = new_array;
      capacity = new_capacity;
    }

    temps[count++] = value;
  }

  for (int i = count - 1; i >= 0; i--){
    printf("%.1f", temps[i]);
    if (i > 0) printf(" ");
  }
  printf("\n");

  free(temps);
  return 0;
}

