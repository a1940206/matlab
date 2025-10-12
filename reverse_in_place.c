#include <stdio.h>
#include <string.h>

int main(void) {
  char str[21];
  printf("Enter string: ");
  if (scanf("%20s", str) != 1) return 1;

  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    char temp = str[i];
    str[i] = str[len - 1 - i];
    str[len - 1 - i] = temp;
  }

  printf("%s\n", str);
  return 0;
}
