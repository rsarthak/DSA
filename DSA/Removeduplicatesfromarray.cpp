#include<iostream>
using namespace std;
int remove(int a[],int n){
int res=1;
for(int i=1;i<n;i++){
    if(a[i]!=a[res-1]){
        a[res]=a[i];
        res++;
            }
}
return res;


}
int main(){
int a[]={45, 6 ,6 ,7,8};
int n=sizeof(a)/sizeof(a[0]);

n=remove(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}