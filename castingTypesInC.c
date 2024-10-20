#include <stdio.h>

int main() {
  int targetInt;
  char sourceChar = 'a';
  targetInt = (int)sourceChar;

  char sourceChar2;
  int targetInt2 = 66;
  sourceChar2 = (char)targetInt2;

  printf("%d\n", targetInt);
  printf("%c", sourceChar2);
}
