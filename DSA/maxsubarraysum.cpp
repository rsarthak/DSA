#include<iostream>
#include<algorithm>
using namespace std;
int maxsum(int a[],int n){
int r=a[0];
int mend=a[0];
for(int i=1;i<n;i++)
{
mend=max(mend+a[i],a[i]);
r=max(r,mend);
}
return r;

}
int main(){
int a[]={2,3,-8,7,-1,2,3};
int n=sizeof(a)/sizeof(a[0]);
cout<<maxsum(a,n);



}