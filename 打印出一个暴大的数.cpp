#include <stdio.h>
//#include <math.h>

/*
int countDigits(int num) {
    if (num == 0) return 1;
    return (int)log10(abs(num)) + 1;
}
*/

int main(){
	unsigned long long num=123456789123456789;
//	printf("Please enter a number: ");
//	scanf("%llu", &num);
	printf("%llu 的指数型表示是：%Le",num,double(num));   
	//此处要有double是因为：前面定义的llu与此处的%Le（long double）类型不匹配
	//double更保险可以换成(long double)num
}

//另外，输出大数还可以用字符串，不会出现溢出问题，但是无法运算