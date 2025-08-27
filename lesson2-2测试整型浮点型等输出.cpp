#include <stdio.h>
/*
main(){
	unsigned int u=2147483648;
	printf("u=%u,u=%d\n", u, int(u));
}
*/

main(){
	int a=1234;
	float f=123.456;
	char ch='a';
	printf("%8d,%-8d,%2d\n", a,a,a);   //八位右对齐，左补空格；八位左对齐，右补空格；位数不够，忽略格式，正常输出原数
	printf("%-10.1f,%.1e\n", f,f);   //十位左对齐，四舍五入保留一位小数；科学计数法保留一位小数
	printf("%3c\n", ch);   //三位右对齐
}