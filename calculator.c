#include<stdio.h>
#include<stdio.h>
void main(){
int opp,a,b;
printf("enter operator");
scanf("%c",&opp);
printf("enter first number");
scanf("%d",&a);
printf("enter secou number");
scanf("%d",&b);
if(opp=='+'){
printf("sum=%d",a+b);
}
else if(opp=='-'){
printf("differ=%d",a-b);

}
else if(opp=='*'){
printf("product=%d",a*b);
}
else if(opp=='/'){
printf("division=%f",a/b);

}
else if(opp=='%'){
printf("remainder=%d",a%b);
}
else{
printf("not defined");

}

}