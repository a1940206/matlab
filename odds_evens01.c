#include <stdio.h>
#include <stdlib.h> // for malloc

int main(void){
  int n;
  printf("Enter number of integers: ");
  if (scanf("%d", &n) != 1 || n <= 0){
    printf("Invalid input.\n");
    return 1;
  }

  int *nums = malloc(n * sizeof(int));
  if (nums == NULL){
    printf("Memory allocation failed.\n");
    return 1;
  }

  printf("Enter %d integers: ", n);
  for (int i = 0; i < n; i++){
    if (scanf("%d", &nums[i]) != 1){
      printf("Invalid input.\n");
      free(nums);
      return 1;
    }
  }

  int odd_count = 0, even_count = 0;
  for (int i = 0; i < n; i++){
    if (nums[i] % 2 == 0) even_count++;
    else odd_count++;
  }

  int *odds = malloc(odd_count * sizeof(int));
  int *evens = malloc(even_count * sizeof(int));
  if (odds == NULL || evens == NULL){
    printf("Memory allocation failed.\n");
    free(nums);
    free(odds);
    free(evens);
    return 1;
  }

  int oi = 0, ei = 0;
  for (int i = 0; i < n; i++){
    if (nums[i] % 2 == 0) evens[ei++] = nums[i];
    else odds[oi++] = nums[i];
  }

  for (int i = 0; i < odd_count; i++){
    printf("%d", odds[i]);
    if (i < odd_count - 1) printf(" ");
  }
  printf("\n");

  for (int i = 0; i < even_count; i++){
    printf("%d", evens[i]);
    if (i < even_count - 1) printf(" ");
  }
  printf("\n");

  free(nums);
  free(odds);
  free(evens);
  return 0;
}
