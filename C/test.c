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
      //printf("����Ϊһ�У��������ÿո�ָ�����������A��B��C�����ݷ�Χ����-40~40֮�䣩\n");
	  printf("error A B C (-40~40)\n");
    }
	
    return 0;
}