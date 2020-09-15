#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char A[100];
	int  count, capital = 0, small = 0;
	scanf("%s", &A);


	for (int i = 0;i < strlen(A);i++)
	{
		if (A[i] >= 'A' && A[i] <= 'Z')
		{
			capital++;
		}
		if (A[i] >= 'a' && A[i] <= 'z')
		{
			small++;
		}
	}

	if (capital > 0 && small == 0)
	{
		printf("All capital Letter");
	}
	else if (capital == 0 && small > 0)
	{
		printf("All small Letter");
	}
	else
	{
		printf("Mix");
	}










	return 0;
}
