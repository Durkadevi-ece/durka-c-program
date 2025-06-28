#include<stdio.h>
#include<conio.h>
void main(){
int score;
printf("enter your score out off 100:");
scanf("%d",&score);
if(score>90){
printf("A+-grade");
}
else if(score>80){
printf("A-grade");
}
else if(score>70){
printf("B-grade");
}
else{
printf("C-grade");
}
getch();
}










