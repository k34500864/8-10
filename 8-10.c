#include<stdio.h>
#include<math.h>
#include<stdbool.h>
bool cnt(int n);
int main(void) {
	long long int i = 2, j = 2, a = 1, b;
	while (a <= 8)
	{
		b = pow(2, j) - 1;
		if (cnt(b))
		{
			printf("%lld.%lld\n", a, b);
			a++;
		}
		j++;
	}
}
bool cnt(int n) {
	int i;
	if (n <= 1)
	{
		return 0;
	}
	for (i = 2; i * i <= n; i++) {
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}