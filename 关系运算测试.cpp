#include <stdio.h>
#include <math.h>

main(){
	float a=1.12;
	float b=1.12;
//	printf("%d\n",a==b);   //此处a==b可生效，结果为1
	int result= fabs(a-b)<1e-6;
	printf("%d\n",result);
	return 0;
}

//如果x、y均为实数，要避免使用x==y，应使用fabs(x-y)<1e-6（1乘以10的-6次方，即一个极小数）
//fabs()用于计算括号中数的绝对值

//逻辑运算：a&&b，ab同时为真；a||b，ab至少一个为真；!a，a为真，!a为假
//! > && > ||