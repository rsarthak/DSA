#include<iostream>
#include<algorithm>
using namespace std;
void reverse(int a[],int low,int high){
while(low<high){
swap(a[low],a[high]);
low++;
high--;
}
}
void leftrotate(int a[],int n,int d){
reverse(a,0,d-1);
reverse(a,d,n-1);
reverse(a,0,n-1);
}
int main(){

int a[]={3,4,5,33,54};
int n=sizeof(a)/sizeof(a[0]);
int d=2;
leftrotate(a,n,d);
for(int i=0;i<n;i++){

cout<<a[i]<<" ";
}

}