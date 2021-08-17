#include<stdio.h>
int main(){
int b=5;
int* v=&b;
*v=*v+9;
printf("%d\n",*v);
printf("%d",b);

}