#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;

	cout<<"a:"<<a<<"\tb:"<<b<<endl;        //Print values enter by user

	int temp=0;                            //temp means any temporary variable

	temp=a;
	a=b;
	b=temp;

	cout<<"a:"<<a<<"\tb:"<<b<<endl;        //Print values after swap


	return 0;
}
