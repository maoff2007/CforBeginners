//#include <stdio.h>   //puts()在这个库里
//
//int main(){
//	char s1[]="C Language";
//	char s2[]="Programme";
//	puts(s1);   //puts()输出字符串后会自动换行
//	puts(s2);
//}


//#include <stdio.h>
//
//main(){
//	char a[15], b[5], c[5];
////	scanf("%s",a);   //使用scanf()的%s整体输入，空格或回车结束，即scanf不能读入带空格的字符串
//	gets(a);   //gets只以回车键结束输入
//	printf("a=%s",a);
//}


//#include <stdio.h>
//#include <string.h>
//
//main(){
//	char c1[]="abcde", c2[]="12345";
//	strcat(c1, c2);   //功能是把c2连到c1后面，成为新的c1
//	puts(c1);
//	puts(c2);
//}


#include <stdio.h>
#include <string.h>

main(){
	char str1[]="Hello!", str2[]="How are you?", str[20];
	int len1=strlen(str1), len2=strlen(str2), len;   //长度函数
	if (strcmp(str1,str2)>0){
		strcpy(str,str1);
	} else if (strcmp(str1,str2)<0){   //对两串从左向右逐个比较ASCII码，返回两个字符串中第一个不同字符的码之差
	//字符串比较不能用“==”，必须用strcmp compare
		strcpy(str,str2);
		strcat(str,str1);
	} else {
		strcpy(str,str1);
	}
	len=strlen(str);
	puts(str);
}