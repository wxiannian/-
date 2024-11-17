#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int panduan(int a[], int len,int x)
{
	for (int i = 0; i < len; i++)
	{
		if (a[i] == x)
			return 1;
	}
	return 0;
}
int main()
{
	
	int a[10];
	int sum = 0;
	for (int i = 0; i < 10; )
	{
		srand(time(NULL));
		int x = rand() % 100 + 1;
		int niu = panduan(a, 10, x);
		if (!niu)
		{
			a[i] = x;
			i ++ ;
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n",a[i]);
	}

}
