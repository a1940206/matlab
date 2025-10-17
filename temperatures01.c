#include <stdio.h>
#include <stdlib.h> // for malloc

int main(void){
  int count;
  printf("Enter number of temperatures: ");
  if (scanf("%d", &count) != 1 || count <= 0){
    printf("Invalid count.\n");
    return 1;
  }

  double *temps = malloc(count * sizeof(double));
  if (temps == NULL){
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Enter %d temperatures: ", count);
  for (int i = 0; i < count; i++){
    if (scanf("%lf", &temps[i]) != 1){
      printf("Invalid input.\n");
      free(temps);
      return 1;
    }
  }

  for (int i = count - 1; i >= 0; i--){
    printf("%.1f", temps[i]);
    if (i > 0) printf(" ");
  }
  printf("\n");

  free(temps);
  return 0;
}
