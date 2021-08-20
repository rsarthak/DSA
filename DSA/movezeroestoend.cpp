#include<iostream>
#include<algorithm>
using namespace std;
void move(int a[],int n){
    int c=0;
    for(int i=0;i<n;i++){
if(a[i]!=0){

swap(a[i],a[c]);
    c++;
}

    }




}
int main(){
    int a[]{23,4,0,5,0,43,8};
    int n=sizeof(a)/sizeof(a[0]);
    move(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}