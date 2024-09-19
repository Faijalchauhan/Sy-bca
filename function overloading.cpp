#include<iostream>
using namespace std;
int add(int a,int b)
{
  cout << "\n......addition of 2 values........" << endl;
  cout <<a+b;
  return 0;
}
int add(int a,int b,int c)
{
   cout << "\n......addition of 3 values........" << endl;
   cout <<a+b+c;
   return 0;
}
int main()
{
  int a,b,c;
  cout << "Enter value of a:" << endl;
  cin >> a;
  cout << "Enter value of b:" << endl;
  cin >> b;
  cout << "Enter value of c:" << endl;
  cin >> c;
  add(a,b,c);
  add(a,b);
  return 0;
}