#include <stdio.h>

int main(void) {
    int nums[11] = {11, 3, 9, 7, 6, 10, 13, 17, 2, 8, 3};
    int evens[11];
    int odds[11];
    int evenCount = 0, oddCount = 0;

    // Separate into even and odd arrays
    for (int i = 0; i < 11; i++) {
        if (nums[i] % 2 == 0)
            evens[evenCount++] = nums[i];
        else
            odds[oddCount++] = nums[i];
    }

    // Print odds
    for (int i = 0; i < oddCount; i++)
        printf("%d ", odds[i]);
    printf("\n");

    // Print evens
    for (int i = 0; i < evenCount; i++)
        printf("%d ", evens[i]);
    printf("\n");

    return 0;
}
