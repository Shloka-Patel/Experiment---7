// NAME - SHLOKA PATEL 
// PRM - 23070123120 
// EXPERIMENT - 7(J)  

#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter a string: ";
cin>>a;
int n=a.length(), i, flag=0;
for(i=0;i<a.length();i++){
if(a[i]==a[n-1]){
flag=1;
}
n--;
}
if(flag==1){
cout<<a<<" is palindrome";
}
else{
cout<<a<<" is not palindrome";
}
}

// Enter a string: Malayalam 
// Malayalam is palindrome