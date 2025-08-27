//十进制转二进制（尚未）（20250728）

#include <stdio.h>

int main() {
    int num = 42;
    char bin_str[33];  // 32位二进制 + '\0'
    char oct_str[12];  // 八进制表示
    char hex_str[9];   // 十六进制表示

    // 十进制 → 二进制（需手动实现，标准库不支持）
    // 见后文的自定义函数

    // 十进制 → 八进制字符串
    sprintf(oct_str, "%o", num);  // 格式说明符 %o
    printf("八进制: %s\n", oct_str);  // 输出 "52"

    // 十进制 → 十六进制字符串
    sprintf(hex_str, "%x", num);  // 小写 %x，大写用 %X
    printf("十六进制: %s\n", hex_str);  // 输出 "2a"

    return 0;
}