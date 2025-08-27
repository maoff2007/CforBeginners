//输入三个数，在能构成三角形的情况下求该三角形的面积
//需要满足：三边均>0，且两边之和大于第三边

#include <stdio.h>
#include <math.h>

main(){
	float a,b,c;
	scanf("%f,%f,%f",&a,&b,&c);
	
	if (a <= 0 || b <= 0 || c <= 0) {
        printf("边长必须为正数！\n");
    } else if (a + b > c && a + c > b && b + c > a) {
    	double s = (a + b + c) / 2;
    	double area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("三角形面积为：%f\n",area);
    } else {
        printf("不能构成三角形。\n");
    }
    return 0;
}