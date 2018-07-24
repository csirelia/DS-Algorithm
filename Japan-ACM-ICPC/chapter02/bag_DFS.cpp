#include<cstdio>
#include<algorithm>
#define MAX_N 105
using namespace std;

int num, value;		//num表示数量，value表示最后的返回值
int weights[MAX_N], values[MAX_N];

int rec(int i, int j)	//i表示第i次迭代，j表示剩余可以挑选的质量
{
	int ans;
	if(i == num)
		return 0;
	else if(j < weights[i]){
		ans = rec(i + 1, j);
	}
	else
	{
		ans = max(rec(i + 1, j), rec(i + 1, j - weights[i]) + values[i]);
	}
	return ans;
}

void slove()
{
	printf("%d\n", rec(0, value));
}

int main(int argc, char const *argv[])
{
	scanf("%d", &num);
	for(int i = 0; i < num; i++)
	{
		scanf("%d %d", &weights[i], &values[i]);
	}
	scanf("%d", &value);
	slove();
	return 0;
}