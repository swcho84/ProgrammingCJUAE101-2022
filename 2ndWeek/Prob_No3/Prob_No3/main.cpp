// Prob.3
#include <stdio.h>

#define NUMSUBJECT 3
#define THRESHCREDIT 10
#define THRESHSCORE 4.0

int main(void)
{
  // calculating credit status
  int kor = 3;
  int eng = 5;
  int mat = 4;
  int credits = kor + eng + mat;

  // calculating grade status
  double kscore = 3.8;
  double escore = 4.4;
  double mscore = 3.9;
  double grade = (kscore + escore + mscore) / ((double)(NUMSUBJECT));

  // calculating results
  int res = ((credits > THRESHCREDIT) && (grade > THRESHSCORE)) ? 1 : 0;

  // for debugging
  printf("Taehee`s status(score, grade):(%d,%.4lf)\n", credits, grade);
  printf("Taehee`s result status: %d\n", res);
  return 0;
}
