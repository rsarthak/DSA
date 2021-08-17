#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  vector<int>v={23,54,3,12,5};
sort(v,v+5);
for(auto x:v){
    cout<<v<<" ";
}




}