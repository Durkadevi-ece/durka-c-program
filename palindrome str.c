#include<stdio.h>
#include<string.h>
void main(){
char str[10];
int len,i;
int count=0;
printf("enter string:");
scanf("%s",&str);
len=strlen(str);
for(i=0;i<len;i++){
if(str[i]==str[len-i-1])
count++;

}
if(len==count)
printf("palindrome");
else
printf("not palindrome");
getchar();
}