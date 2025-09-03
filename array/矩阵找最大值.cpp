//输入3*4的矩阵，找出其中的最大值，并定位行号和列号
//i控制行数<=3，j控制列数<=4

#include <stdio.h>

main(){
	int matrix[3][4],i,j,row=0,col=0,max;
	for (i=0; i<3; i++){
		for (j=0; j<4; j++){
			scanf("%d", &matrix[i][j]);
		}
	}
	
	max=matrix[0][0];   //max初始化要在循环外，不然上一次循环完得到的max就没法在下一次中使用
	for (i=0; i<3; i++){
		for (j=0; j<4; j++){
			if (matrix[i][j]>=max) {
				max=matrix[i][j];
				row=i+1;
				col=j+1;
			}	
			
		}
	}
	
	printf("%d, %d * %d", max,row,col);
}
