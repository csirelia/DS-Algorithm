/*
输出n个数字，判断其中能不能组成三角形
若能，并输出最大的三角形周长
反之，输出0
*/

#include<stdio.h>
#define MAX_N 105

int a[MAX_N] = {0};

void sort(int a[MAX_N], int n)
{
	int tmp;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void solve(int a[MAX_N], int n)
{
	for(int i = 0; i < n - 2; i++)
	{
		if(a[i] < a[i + 1] + a[i + 2])
		{
			printf("%d\n", a[i] + a[i + 1] + a[i + 2]);
			return;
		}
	}
	printf("0\n");
}

int main(int argc, char const *argv[])
{
	int n, a[MAX_N];
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, n);
	solve(a, n);
	return 0;
}