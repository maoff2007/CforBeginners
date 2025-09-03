//#include <stdio.h>
//main(){
//	char ch;
//	scanf("%c",&ch);
//	//ch=(ch>='A'&&ch<='Z'? (ch+32):ch);   就是下面第八行的意思
//	
//	if (ch>='A'&&ch<='Z'){
//		ch=ch+32;
//	}
//	printf("%c",ch);
//}

#include <stdio.h>
int main(){
	int a=4, b=3, c=2, d=1;
	printf("%d", a<b?b:c<d?a:d);
	//这是一个嵌套的三目运算符，结构如：a<b?b:(c<d?a:d)
	return 0;
}
