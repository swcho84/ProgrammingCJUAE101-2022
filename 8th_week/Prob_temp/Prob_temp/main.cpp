#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)
#define PATHTOKEN   "\\"
#define FILETOKEN   "."
#define MAXSPLITSIZE 200
#define MAXSTRLEN   1000

int main(void)
{
	char strFilePath[] = "C:\\Document\\Github\\Test1\\test.txt";
  char* pStrFilePath = strFilePath;
  char* pStrSplitFilePath[MAXSPLITSIZE] = { NULL, };

  char* ptrSplitFilePathToken = strtok(pStrFilePath, PATHTOKEN);
  int nCounterFilePath = 0;
  while (ptrSplitFilePathToken != NULL)
  {
    pStrSplitFilePath[nCounterFilePath] = ptrSplitFilePathToken;
    nCounterFilePath++;
    ptrSplitFilePathToken = strtok(NULL, PATHTOKEN);
  }

  char* pStrFileWext = pStrSplitFilePath[nCounterFilePath - 1];
  char* pStrSplitFileWext[MAXSPLITSIZE] = { NULL, };
  char* pStrFileWextToken = strtok(pStrFileWext, FILETOKEN);
  int nCounterFileExt = 0;
  while (pStrFileWextToken != NULL)
  {
    pStrSplitFileWext[nCounterFileExt] = pStrFileWextToken;
    nCounterFileExt++;
    pStrFileWextToken = strtok(NULL, PATHTOKEN);
  }
  char* pFileName = pStrSplitFileWext[0];
  char* pFileExt = pStrSplitFileWext[1];

  char strNewFileNameExt[] = "test2";
  char* pStrNewFileNameExt = strNewFileNameExt;
  strcat(pStrNewFileNameExt, ".");
  strcat(pStrNewFileNameExt, pFileExt);

  char strNewFilePath[] = " ";
  char* pStrNewFilePath = strNewFilePath;
  for (int i = 0; i < nCounterFilePath - 1; i++)
  {
    strcat(pStrNewFilePath, pStrSplitFilePath[i]);
    strcat(pStrNewFilePath, "\\");
  }
  strcat(pStrNewFilePath, pStrNewFileNameExt);
  printf("%s\n", pStrNewFilePath);

	system("pause");
	return 0;
}