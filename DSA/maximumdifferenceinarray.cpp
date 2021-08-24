#include<iostream>
#include<algorithm>
using namespace std;
int maxd(int a[],int n){
int r=a[1]-a[0];
int m=a[0];
for(int i=1;i<n;i++){
r=max(r,a[i]-m);
m=min(m,a[i]);
}
return r;


}
int main(){
int a[]={2,3,10,6,4,8,1};
int n=sizeof(a)/sizeof(a[0]);
cout<<maxd(a,n);




}