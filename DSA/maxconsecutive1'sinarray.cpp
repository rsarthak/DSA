#include<iostream>
#include<algorithm>
using namespace std;
int maxc(int a[],int n){
int r=0;
int c=0;
for(int i=0;i<n;i++){
if(a[i]==0)
c=0;
else{
c++;
r=max(r,c);
}
}
return r;
}
int main(){
int a[]={0,0,1,1,1,0,1,0};
int n=sizeof(a)/sizeof(a[0]);
cout<<maxc(a,n);



}