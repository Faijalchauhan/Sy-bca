#include <iostream>
using namespace std;

int main(){
	int x, y;

	cout<<"Enter value of x: ";
	cin >> x;
	cout << "Enter value of y:" << endl;
	cin >> y;
    cout << "Before swap value:" <<" x="<<x<<" y="<<y<< endl;
    
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

	cout << "After swap value :" << "x="<<x<<" y="<<y<<endl;
	return 0;
}