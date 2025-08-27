#include <stdio.h>

int main(){
	double num;
	scanf("%lf", &num);   //定义了num为double，scanf中应对应写%lf。%f会出现错误。
	printf("%.4e",num);   //科学计数法，四舍五入保留四位小数
}
