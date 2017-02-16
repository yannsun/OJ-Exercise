- 1000

``` C
#include<stdio.h>
int main()
{
	int a, b;
	while (scanf("%d%d", &a, &b) != EOF)
	{
		printf("%d\n", a + b);
	}
	return 0;
}
```
- 1001

``` C
#include<stdio.h>
int main(void)
{
	double a;
	while(scanf("%lf", &a) != EOF)
	{
		printf("%d\n\n", (int)((1+a)*a/2));
	}
	return 0;
}
```
