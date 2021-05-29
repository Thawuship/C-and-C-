// Reference is nothing but another name given to the variable

#include<iostream>
using namespace std;
int main(){
	
	int A = 10;
	int &r = A;
	cout<<A<<endl<<r<<endl;
	// Reference doesnot consume memory, it use the same memory of A. 
	// The change of reference will change the A. 
	return 0;
}

