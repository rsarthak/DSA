#include<stdio.h>
int main(){
char a;
int s,e,i,o,u;
s=e=i=o=u=0;
while(a=='a'|| a=='e' || a=='i' || a=='o' || a=='u'){
printf("enter characters\n");
scanf("%c",&a);
if(a=='a')
s++;
if(a=='e')
e++;
if(a=='o')
o++;
if(a=='i')
i++;
if(a=='u')
u++;


}
printf("number of characters are%d",s+e+i+o+u);




}