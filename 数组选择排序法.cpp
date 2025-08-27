//选择排序法每轮通过打擂选出最大数，将其与要去的位置的数 交换位置

#include <stdio.h>

main(){
	int a[5],b[5],i,j,n,t;
	for (i=0; i<5; i++) {
		scanf("%d",&a[i]);
	}
	
	for (j=0; j<5; j++){
		int min=a[j];
		for (i=j; i<5; i++) {
			if (a[i]<=min) {
				min=a[i];
				n=i;
			}
		}
		b[j]=min;
		a[n]=a[j];
	}
		
	for (i=0; i<5; i++) {
		printf("%d",b[i]);
	}
}


//纯唐诗，两个//之间的部分还是烦了，不需要min，大小循环＋一个if就可以解决，如下
/*
	for (i=0; i<4; i++){
		for (j=i+1; j<5; j++) {
			if (a[i]>a[j]) {
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
//相当精妙，是一个不断优化最小值的思路
*/