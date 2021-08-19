#include<iostream>
using namespace std;
void reverse(int a[],int n){
int low=0;
int high=n-1;
while(low<high){
int temp=a[low];
a[low]=a[high];
a[high]=temp;
low++;
high--;
}

}
int main(){
int a[]={4,5,45,76,34};
int n=sizeof(a)/sizeof(a[0]);
reverse(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}


}