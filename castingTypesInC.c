#include <stdio.h>

int main() {
  int targetInt;
  char sourceChar = 'a';
  targetInt = (int)sourceChar;
  printf("%d\n", targetInt);

  char sourceChar2;
  int targetInt2 = 66;
  sourceChar2 = (char)targetInt2;
  printf("%c", sourceChar2);

}
