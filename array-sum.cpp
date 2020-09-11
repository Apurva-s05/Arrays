#include <iostream>
using namespace std;

int main() {
	int n;
	cout<<"Enter number of elements: "<<endl;
	cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
    	cin>>a[i];                     //Take input
    }

    for(int i=0;i<n;i++){
    cout<<" "<<a[i];                 //print array
    }

    int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
    cout<<"\nSum: "<<sum<<endl;     //Array sum

	return 0;
}
