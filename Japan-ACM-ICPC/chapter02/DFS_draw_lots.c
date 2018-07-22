/*
Give a target number, pick several(named loops) numbers
find out if there is a solution to meet the demands
target == sum
*/


#include<stdio.h>
#define MAX_N 25

int loops = 0, sum = 0, num, arr[MAX_N], target;

int DFS(int sum, int loops)
{
	if(loops == num)	return target == sum;

	if(DFS(sum, loops + 1))
		return 1;

	if(DFS(sum + arr[loops], loops + 1))
		return 1;

	return 0;
}

int main(int argc, char const *argv[])
{
	scanf("%d", &num);
	for(int i = 0; i < num; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &target);
	if(DFS(0, 0) == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}