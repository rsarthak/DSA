#include<stdio.h>


int main(){
   int b;
   scanf("%d",&b);
   int r=0;
   // 123
   //123%10=3
   //123/10=12
while(b>0){
r=r*10+ b%10;
b=b/10;
}
printf("%d",r);









 }
