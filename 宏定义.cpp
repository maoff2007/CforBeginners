#define PRICE 30
#define POWER(x) x*x
#define POWERPRO(x) ((x)*(x))
#include <stdio.h>

main()
{
	int num,sum;
	num=90;
	sum=num+PRICE;
	printf("sum= %d\n",sum);

	int a=4, b=6;
	printf("POWER= %d\n", POWER(a+b));   //POWER(x+y) 会被直接替换为 x+y*x+y，优先级乘法>加法
	printf("POWERPRO= %d\n", POWERPRO(a+b));
}

