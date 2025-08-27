#include <stdio.h>
#include <limits.h>  // 包含INT_MAX和INT_MIN的定义

int main() {
	int n;
	n=sizeof(int);
    printf("int 存储大小: %lu 字节\n", sizeof(int));
    printf("int 的最小值: %d\n", INT_MIN);
    printf("int 的最大值: %d\n", INT_MAX);
    return 0;
}