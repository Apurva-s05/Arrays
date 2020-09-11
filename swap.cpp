#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;

	cout<<"Values before swap:"<<endl;
	cout<<"a:"<<a<<"\tb:"<<b<<endl;        

	int temp=0;                            //temp means any temporary variable

	temp=a;
	a=b;
	b=temp;

	cout<<"Values after swap:"<<endl;
	cout<<"a:"<<a<<"\tb:"<<b<<endl;        


	return 0;
}
