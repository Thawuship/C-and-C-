// Structure
#include<iostream>
#include<stdio.h>

using namespace std;

// definition of the structure 
struct Rectangle{
	int length;
	int breadth;
};

int main(){
	struct Rectangle r1 = {5,6}; // This is the declaration and initialization of r1 structure
	r1.length = 3; // change the value of length
	cout<<sizeof(r1)<<endl;
	cout<<r1.breadth<<endl;
	cout<<r1.length<<endl;
}


