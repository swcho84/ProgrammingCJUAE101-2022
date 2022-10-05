#include <stdio.h>
#include <stdlib.h>

// recursive call function, for adding numbers between 1 and input
int CalcRecursiveAdd(int nInput)
{
  if (nInput == 1)
    return 1;

  return nInput + CalcRecursiveAdd(nInput - 1);
}

int main(void)
{
  // initializing variables  
  int nA = 0;

  // main loop
  while (1)
  {
    // interaction: getting some information related to the problem
    printf("Need to enter data(single numbers): ");
    scanf_s("%d", &nA);
    printf("Your raw input: %d\n", nA);

    // calculating the start and end number
    int nNumStart = 1;
    int nNumEnd = nA;
    if (nA < nNumStart)
    {
      // asserting the wrong input and re-interaction
      printf("Please check your input..try again..\n");
      continue;
    }
    else
    {
      printf("Summation: from 1 to %d\n", nNumEnd);
      printf("Output: %d\n", CalcRecursiveAdd(nNumEnd));
      break;
    }
  }

  system("pause");
  return 0;
}