#include <iostream>

using namespace std;

int main(){
	long long int n;
	cin>>n;
	if(n%6==0 || n%6==1 || n%6==3)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}