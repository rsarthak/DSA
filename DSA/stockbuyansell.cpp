#include<iostream>
using namespace std;
int maxp(int a[],int n){
int p=0;
for(int i=1;i<n;i++){
    if(a[i]>a[i-1]){
p+=(a[i]-a[i-1]);


    }
    
}

return p;

}
int main(){
    int a[]={1,5,3,8,12};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<maxp(a,n);
}