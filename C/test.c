#include<stdio.h>
int main(){
    int a,b,c,d;
	int x=-40;
	int y=40;
    scanf("%d %d %d", &a, &b, &c);
    if((x <= a)&&(a>= -40)){
		d = (a+b+c);
       printf("%d",d);
    }else{
      //printf("输入为一行，包括了用空格分隔的三个整数A、B、C（数据范围均在-40~40之间）\n");
	  printf("error A B C (-40~40)\n");
    }
	
    return 0;
}