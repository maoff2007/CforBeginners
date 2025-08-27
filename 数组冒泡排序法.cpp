//冒泡排序法每轮循环通过两两比较，将最大数移到最边上
//第二轮将次大数移到第二靠边的位置，依此类推

#include <stdio.h>

main(){
	int a[5],i,j,t;
	for (i=0; i<5; i++){
		scanf("%d",&a[i]);
	}
	for (i=0; i<5; i++){
		for (j=0; j<5-i; j++){   //核心※：外层循环控制轮数，内层循环控制比较次数
			if (a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;   //交换a[j]和a[j+1]
			}
		}
	}
	for (i=0; i<5; i++){
		printf("%d",a[i]);
	}
}