#include <stdio.h>
#define RANGE(low, high) (score >= low && score < high)

main(){
	int score=75;
	
	switch(1){
		case RANGE(90,100):
			printf("very good");
			break;
		case RANGE(80,90):
			printf("good");
			break;
		case RANGE(60,80):
			printf("pass");
			break;
		default:
			printf("fail");
	}
}

//失败了，可见非连续的条件需要if……else判断
