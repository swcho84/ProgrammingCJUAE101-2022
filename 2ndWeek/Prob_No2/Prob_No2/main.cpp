// Prob.2
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char ch;

  printf("Input Character:\n");
  scanf_s("%c", &ch);
  printf("Your Input:%c\n", ch);
  printf("Your Input To Ascii Code:%d\n", ch);

  // for windows, visual studio 2022
   system("pause");
  return 0;
}

