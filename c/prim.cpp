#include<iostream>
using namespace std;
bool fun(int n){
for(int i=2;i<n;i++){
if(n%i==0)
return false;

}
return true;
}int main(){
int n=200;
for(int i=2;i<n;i++){
if(fun(i))
cout<<i<<" ";



}




}