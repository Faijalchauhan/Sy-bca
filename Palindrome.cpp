#include <iostream>  
using namespace std;  
int main()  
{  
  int n,j,i=0,org;    
  cout<<"Enter the Number=";    
  cin>>n;    
 org=n;    
 while(n>0)    
{    
 j=n%10;    
 i=(i*10)+j;    
 n=n/10;    
}    
if(org==i)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.";   
  return 0;  
}  