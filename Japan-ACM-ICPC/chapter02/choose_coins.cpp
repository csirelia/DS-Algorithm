#include<cstdio>
#include<algorithm>
#define ClassesOfCoins 6
using namespace std;

int target, C[ClassesOfCoins];
int Money[ClassesOfCoins] = {1, 5, 10, 50, 100, 500};

int slove()
{
	int ans = 0;
	for(int i = ClassesOfCoins - 1; i >= 0; i--)
	{
		int t = min(target / Money[i], C[i]);
		target -= t * Money[i];
		ans += t;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	for(int i = 0; i < ClassesOfCoins; i++)
	{
		scanf("%d", &C[i]);
	}
	scanf("%d", &target);
	printf("%d\n", slove());
	return 0;
}