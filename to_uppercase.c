#include <stdio.h>

int main(void) {
  char name[21];
  printf("Enter name: ");
  if (scanf("%20s", name) != 1) return 1;

  for (int i = 0; name[i] != '\0'; i++) {
    if (name[i] >= 'a' && name[i] <= 'z')
      name[i] -= 32;
  }

  printf("%s\n", name);
  return 0;
}
