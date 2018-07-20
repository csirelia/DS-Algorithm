/*
4次放回抽卡片
若存在方案使得四次数字之和是m，则是正确
参考数据：
n = 3 表示3张卡片
m = 10 表示目标值是10
k = {1, 3, 5} 表示每张卡片的值
这个方案使用暴力破解
*/

#include<stdio.h>

#define MAX_NUM 50

int main(int argc, char const *argv[])
{
	int n, m, k[MAX_NUM];
	int flag = 0;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++)
		scanf("%d", &k[i]);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			for(int x = 0; x < n; x++)
			{
				for(int y = 0; y < n; y++)
				{
					if(k[i] + k[j] + k[x] + k[y] == m)
						flag = 1;
				}
			}
		}
	}
	if(flag == 0)	
		printf("False\n");
	else
		printf("True\n");
	return 0;
}