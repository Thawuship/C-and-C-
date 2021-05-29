// Pointer to Structure

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
	int length;
	int breath;
};
int main(){
	
	Rectangle r = {2,3};
	cout<<"Length of Rectangle"<<endl<<r.length<<endl;	//Print the data directly 
	cout<<"Breath of Rectangle"<<endl<<r.breath<<endl;
	
	Rectangle *p=&r;									// Assign and declare the pointer
	cout<<p->length<<endl; 							
	cout<<p->breath<<endl;
	
	// Create object of Rectangle in the Heap
	struct Rectangle *P;								// Declare the pointer 
	P = (struct Rectangle *)malloc(sizeof(Rectangle)); // Melloc function will allocate the dynamic memory , C language
	// P = new Rectangle; 								// Create a rectangle object in Heap using C++
	P->breath = 45;
	P->length = 56;
	
	cout<<P->length<<endl;
	cout<<P->breath<<endl; 
	
}

