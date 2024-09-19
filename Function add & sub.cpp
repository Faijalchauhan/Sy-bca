#include<iostream>
using namespace std;
int add(int a,int b)
{
  cout << "\nAddition" << endl;
   cout <<a+b;
   return 0;
}
int sub(int a,int b)
{
  cout << "\nsubtraction" << endl;
  cout <<a-b;
  return 0;
}
int main()
{
  int a,b;
  cout << "Enter value of a:" << endl;
  cin >> a;
  cout << "Enter value of b:" << endl;
  cin >> b;
  add(a,b);
  sub(a,b);
  return 0;
}