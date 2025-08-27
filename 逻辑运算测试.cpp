#include <stdio.h>

main(){
	int result= 5>3&&8<4-!0;
	// (5>3)&&(8<(4-(!0))) 其中!0默认为1
	printf("%d\n", result);
}