#include <stdio.h>

int main(void) {
    char name[21];
    printf("Enter name: ");
    scanf("%20s", name);

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] >= 'a' && name[i] <= 'z')
            name[i] = name[i] - 32;
    }

    printf("%s\n", name);
    return 0;
}
