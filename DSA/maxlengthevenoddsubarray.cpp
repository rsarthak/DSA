#include<iostream>
#include<algorithm>
using namespace std;
int maxl(int a[],int n){
    int r=1;
    int c=1;
for(int i=1;i<n;i++){
if((a[i]%2==0 && a[i-1]%2!=0) || (a[i]%2!=0 && a[i-1]%2==0)){
    c++;
    r=max(r,c);
}
else
c=1;

}
return r;


}
int main(){
int a[]={12,3,4,5,6};
int n=sizeof(a)/sizeof(a[0]);
cout<<maxl(a,n);



}