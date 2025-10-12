#include <stdio.h>

int main(void) {
  int nums[11] = {11, 3, 9, 7, 6, 10, 13, 17, 2, 8, 3};
  int evens[11];
  int odds[11];
  int evenCount = 0, oddCount = 0;

  for (int i = 0; i < 11; i++) {
    if (nums[i] % 2 == 0)
      evens[evenCount++] = nums[i];
    else
      odds[oddCount++] = nums[i];
  }

  for (int i = 0; i < oddCount; i++) printf("%d ", odds[i]);
  printf("\n");

  for (int i = 0; i < evenCount; i++) printf("%d ", evens[i]);
  printf("\n");

  return 0;
}
