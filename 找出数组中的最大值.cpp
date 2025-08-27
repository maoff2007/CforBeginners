#include <stdio.h>

int main(){
	int a[10],i;
	for (i=0; i<10; i++){
		scanf("%d",&a[i]);   //我服了scanf前别忘了&啊
	}
	int max=a[0];
	int n=0;
	for (i=0; i<10; i++){
		if (a[i]>=max){
			max=a[i];
			n=i+1;
		}
	}
	printf("%d,%d",max,n);
}