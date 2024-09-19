#include<iostream>
using namespace std;

int main()
{
   int num;
   cout << "Enter any digit:" << endl;
   cin >> num;
   if(num%2==0)
   {
     cout << "EVEN NUMBER" << endl;
   }
   else
   {
      cout << "ODD NUMBER" << endl;
   }
   return 0;
}