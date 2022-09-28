// Prob.4
#include <stdio.h>

#define LOWBMI  20.0
#define HIGHBMI 25.0
#define CM2M 0.01

int main(void)
{
  double weight = 0.0;
  double height = 0.0;
  double bmi = 0.0;

  printf("Input Info(Weight, Height):\n");
  scanf_s("%lf%lf", &weight, &height);

  bmi = (weight) / ((height * CM2M) * (height * CM2M));

  printf("BMI result:%.4lf\n", bmi);
  printf("Your Status: ");
  ((bmi > LOWBMI) && (bmi < HIGHBMI)) ? printf("Normal\n") : printf("Need to Diet or Gain Weight....\n");

  return 0;
}