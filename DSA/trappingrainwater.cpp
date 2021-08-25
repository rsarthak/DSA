#include<iostream>
#include<algorithm>
using namespace std;
int trap(int a[],int n){
int r=0;
int lmax[n],rmax[n];
lmax[0]=a[0];
for(int i=1;i<n;i++)
{
    lmax[i]=max(lmax[i-1],a[i]);
}
rmax[n-1]=a[n-1];
for(int i=n-2;i>=0;i++){
    rmax[i]=max(rmax[i+1],a[i]);
}
for(int i=1;i<n-1;i++){
    r+=min(lmax[i],rmax[i])-a[i];
}
return r;
}
int main(){
int a[]={2,0,2};
int n=sizeof(a)/sizeof(a[0]);
cout<<trap(a,n);



}