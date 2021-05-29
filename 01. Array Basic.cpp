// Array = Set of similar elements 

#include<iostream> // C++ language
#include<stdio.h> // C language
using namespace std;
int main()
{
	int A[5]; // Declare the array size of 5 
	A[0] = 5;
	A[1] = 2;
	A[2] = 1;
	
	cout<<sizeof(A)<<endl; // Print the size of Array A, endl is used to start new line 
	cout<<A[2]<<endl; // Print the 3rd value of Array of A, C++
	printf("%d\n", A[1]); // C
	
	int B[] = {3,5,6,7,23,67,89};
	int C[6] = {23,54,12,34};
	for (int i = 0; i<6; i++)
	{
		cout<<C[i]<<endl;
	}
	
// Input a integer and print the value of array
	int n;
	cout<<"Enter the Number"<<endl;
	cin>>n;
	cout<<B[n];
	return 0;
}



