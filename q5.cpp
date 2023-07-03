#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int last=n%10;
int second=(n/10)%10;
int first=((n/10)/10)%10;
cout<<first+second+last;
return 0;
}