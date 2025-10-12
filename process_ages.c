#include <stdio.h>

int main(void) {
    int ages[10];
    int count = 0;
    int age;
    int sum = 0, max, min;

    while (count < 10) {
        printf("Enter age (or -1 to stop): ");
        scanf("%d", &age);

        if (age == -1)
            break;
        if (age < 0 || age > 150) {
            printf("Invalid age, try again.\n");
            continue;
        }

        ages[count++] = age;
    }

    if (count == 0) {
        printf("No ages entered.\n");
        return 0;
    }

    max = min = ages[0];
    for (int i = 0; i < count; i++) {
        if (ages[i] > max) max = ages[i];
        if (ages[i] < min) min = ages[i];
        sum += ages[i];
    }

    double avg = (double)sum / count;
    printf("%d %d %.1f\n", max, min, avg);
    return 0;
}
