#include<iostream>
using namespace std;
bool sorted(int a[],int n){
for(int i=1;i<n;i++){
    if(a[i]<a[i-1])
return false;
}
return true;
}

int main(){
int a[]={34,5,67};
int n=sizeof(a)/sizeof(a[0]);
if(sorted(a,n))
cout<<"yes";
else
cout<<"no";




}