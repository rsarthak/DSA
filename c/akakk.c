#include<stdio.h>
int g(int a,int b){
if(b==0)
return a;
return g(b,a%b);
}
int main(){

int a,b;
printf("enter numbers\n");
scanf("%d %d",&a,&b);
printf("HCF is : %d\n",g(a,b));
int l;
l=(a*b)/g(a,b);
printf("LCM is: %d",l);
}