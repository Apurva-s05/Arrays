#include <iostream>
using namespace std;

int main() {

	int n;
	cout<<"Enter number of elements: "<<endl;
	cin>>n;

	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Normal:"<<endl;
	for(int i=0;i<n;i++){
		cout<<" "<<a[i];      //array with elements enter by user
	}
    cout<<endl;

	cout<<"Reversed:"<<endl;
	for(int i=n-1;i>=0;i--){
		cout<<" "<<a[i];      //Reverse array
	}
    cout<<endl;

	return 0;
}
