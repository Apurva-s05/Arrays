// int a[10];                Array declaration

//int a[4]={1,2,3,4};       Array Initialization

//int a[10]={1,2,3};        output=1 2 3 0 0 0 0 0 0 0

//int a[10]={ };             output gives garbage values

//code

#include<iostream>

using namespace std;

int main(){

int a[10];

for(int i=0;i<10;i++){

a[i]=i*i;
cout<<" "<<a[i]<<endl;

}
return 0;
}
