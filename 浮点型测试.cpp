//浮点型测试
/*
#include <stdio.h>

main(){
	float a;
	double c;
	a=123.45;
	c=123.45;
	printf("a=%f c=%f",a,c);
}



//字符型测试

#include <stdio.h>

main(){
	char name='2';
	printf("name=%c",name);
}

//'a'对应97，'A'对应65
//另：存放字符串时不存在字符串变量，用字符数组存放
*/


//浮点型数据的舍入误差
#include <stdio.h>

main(){
	float a,b;
	a=123456.789e5;
	b=a+20;
	printf("%f\b%f\n",a,b);  //最终结果a=b，无法识别+b
	//\t 跳到下一个tab位置
	//\b 后面一个数往前退一格，前面一个数最后一个0被占掉
	//\b\b连续退格，如123\b\bX，就是用X取代掉2，最终呈现1X3
}

//修改方法，把float改为double，可以储存和运算大数
