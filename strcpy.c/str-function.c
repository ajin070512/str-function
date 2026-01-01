#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char dest[30]="good!";//12
	char source[20]="hello world!";//13
	int comp = 0;

/*
	//对strcpy函数的测试；
	strcpy(dest,source);
	printf("复制过后的dest是：\n%s\n",dest);
*/
/*
	//对strcat函数的测试
	strcat(dest,source);
	printf("连接source字符串过后的dest是：\n%s\n",dest);
*/

	//对strcmp函数的测试
	comp = strcmp(dest,source);
	printf("比较结果是：%d\n",comp);

/*
	//对strupr和strlwr函数的测试
	strupr(dest);
	printf("大写转换后的dest是：\n%s\n",dest);
	strlwr(dest);
	printf("小写转换后的dest是：\n%s\n",dest);
*/

	system("pause");
return 0;
}