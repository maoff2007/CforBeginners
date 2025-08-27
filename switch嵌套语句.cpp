#include <stdio.h>

main(){
	int x=1,y=0,a=0,b=0;
	switch(x){
		case 1:   //case1中没有break，所以case2和3还会执行，switch的“fall through”现象
		switch(y){
			case 0: a=a+1;
				break;
			case 1: b=b+1;
				break;
			}
		//如果要避免“fall through”，在此处添加break	
		case 2:
		case 3:
		a=a+1, b=b+1;
		break;
	}
	printf("a=%d,b=%d",a,b);		
}