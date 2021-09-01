#include<iostream>
#include<string>
using namespace std;
bool ispal(string &s){
int begin=0;
int end=s.length()-1;
while(begin<end){
if(s[begin]!=s[end])
return false;
begin++;
end--;

}
return true;



}






int main(){
string s;
getline(cin,s);
if(ispal(s))
cout<<"yes";
else
cout<<"no";


}