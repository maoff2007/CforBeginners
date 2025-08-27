//本程序包含getchar,putchar的用法


#include <stdio.h>
/*
int main() {
    printf("请输入一个字符：");
    int ch = getchar();  //注意getchar返回的是 int，不是char
    printf("你输入的字符是：%c\n", ch);
    return 0;
}
*/
int main(){
	putchar('\101');   //''只能包裹单个字符
	//此处101为八进制数，代表A。\+1~3位八进制数字即代表八进制，\x+任意位十六进制数字即代表十六进制
	putchar('\n');   //换行
	putchar('\n');   //再换行（呈现效果为空行）
	putchar('\\');
}

/*
main(){
	int c;
	printf("Enter a character:");
	c=getchar();
	printf("%c:%d\n",c,c);
}

//getchar()和gets()的区别在于前者只能接收单个字符，后者读取一行字符串
*/