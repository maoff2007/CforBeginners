//输入一个整数，将它分别转化为十进制，八进制，十六进制

#include <stdio.h>

int main(){
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("%d 对应的十进制数为： %d\n", num, num);
	printf("%d 对应的八进制数为： %o\n", num, num);
	printf("%d 对应的十六进制数为： %x\n", num, num);
}