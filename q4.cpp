#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int first=n/10000;
int second_last=(n/10)%10;
cout<<first+second_last;
return 0;
}