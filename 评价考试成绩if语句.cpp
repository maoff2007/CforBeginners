//输入一个成绩，if语句判断
//并没有搞清楚如何在输入不合规的情况下重新输入，第二次重新判断（8/9）
//累死我了明天重写一个，太难了（8/9）

#include <stdio.h>

main(){
	int score;
	printf("请输入考试成绩：");
	//scanf("%d", &score);
//这里不能有这句，不然下面scanf还会等着第二个输入
	
	
	while (scanf("%d", &score)!=1){   //输入的不是数字
		printf("输入无效，请重新输入：");
		//scanf("%d", &score);   不需要这句以及L22的那句，因为始终在循环体内
//这个while里第一次输入A，会导致死循环的原因是，scanf的返回值始终是A，而无法接收后续输入的数
		while (getchar()!='\n');   //不断读取输入缓冲区中的字符，直到读取到换行符 `\n` 为止，起到清空缓冲区的作用
	}
		
	while (score<0 || score>100){	
		printf("分数不在合理范围内，请重新输入：");
		scanf("%d", &score);
//这里不会死循环是因为，判断的不是scanf返回值，而是score
/*		if (scanf("%d", &score) != 1) {
            printf("输入无效，请重新输入：");
            while (getchar() != '\n');
        }
这里要再来一次，是为了防止输入如-1a后出现死循环，scanf("%d", &score)会读取-1（因为%d只匹配整数），剩下的a会留在输入缓冲区*/
	}

	if (score>=90){
		printf("very good");        
	}else if (score>=80){
		printf("good");
	}else if (score>=60){
		printf("pass");
	}else{
		printf("fail");
	}				
}
