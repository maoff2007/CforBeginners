#include <stdio.h>
//#include <ctype.h>   提供字符类型判断和大小写转换功能

int main() {
    int score;
    char ch;

    while(1){
        printf("请输入成绩: ");
        if (scanf("%d", &score) != 1){   //如果输入不是数字
            printf("输入无效，请重新输入！\n");
            ch=getchar();
            while (ch!='\n'){
				ch = getchar();   // 清空缓冲区
        	}   //这三行相当于 while((ch=getchar)!='\n'); 一个一个读，没有读取到换行符就一直读下去
			continue;
        }

        //检查缓冲区是否还有额外字符（如 19a）
        ch=getchar();
        if (ch!='\n') {    //如果输入后面有非换行符的字符（如 19a）
            printf("不能包含非数字字符，请重新输入：");
            while (getchar() != '\n');
            continue;
        }

        // 检查范围
        if (score < 0 || score > 100) {
            printf("成绩不在合理范围内，请重新输入：");
            continue;
        }
        
        break;
    }

    if (score >= 90) {
        printf("very good");
    } else if (score >= 80) {
        printf("good");
    } else if (score >= 60) {
        printf("pass");
    } else {
        printf("fail");
    }

    return 0;
}