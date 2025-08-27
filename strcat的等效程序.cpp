#include <stdio.h>
#include <string.h>
int main(){
	char c1[80]="abcde", c2[]="12345";
	char element;
	int i;

	int l1=strlen(c1);
	for (i=0; (element=c2[i])!='\0'; i++){
		c1[i+l1]=c2[i];
	}
	printf("%s",c1);
}
//这他妈也太麻烦了

//#include <stdio.h>
//#include <string.h>
//int main(){
//	char str1[80]="abcde", str2[80]="12345";
//	int i=0, j=0;
//	while (str1[i]!='\0')
//		i=i+1;               //这个循环结束i=5
//	while (str2[j]!='\0'){
//		str1[i]=str2[j];
//		i=i+1;
//		j=j+1;
//	}
//	str1[i]='\0';    //此处i=10
//	puts(str1);
//}
////好吧，他也用了两个循环，也没简单到哪去
