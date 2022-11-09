#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
#define MAXSTRLENGTH	80

int main(void)
{
	char str[MAXSTRLENGTH];
	strcpy_s(str, MAXSTRLENGTH, "wine");
	strcat_s(str, MAXSTRLENGTH, "apple");
	printf("%s, %d\n", str, (int)(strlen(str)));

	//strncpy_s(str, MAXSTRLENGTH, "pine", 1);
	strncpy(str, "pine", 1);
	printf("%s, %d\n", str, (int)(strlen(str)));
	return 0;
}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main(void)
//{
//	string strTest1 = "wine";
//	string strTest2 = "pine";
//	string strTest3 = strTest1 + "apple";
//	printf("%s, %d\n", strTest3.c_str(), (int)(strTest3.length()));
//
//	strTest3.replace(0, 1, strTest2);
//	printf("%s, %d\n", strTest3.c_str(), (int)(strTest3.length()));
//
//	return 0;
//}