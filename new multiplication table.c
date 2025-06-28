#include<stdio.h>

void main(){
int i,num;
printf("enter number");
scanf("%d",&num);
printf("\n multiplication table");
for(i=1;i<=10;i++){
printf("%dx%d=%d \n",num,i,num*i);
}

}