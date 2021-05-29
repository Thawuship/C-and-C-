// Pointer is a address variable that meant for storing address of data not the data itself
// Pointers are use for
// 1. Accessing Heap 
// 2. Accessing Resource
// 3. Parameter Passing 

#include<iostream>
#include<stdio.h> 
#include<stdlib.h> 								// Use to operate Heap
using namespace std;
int main(){
	// Pointer to an Integer
	int a = 10;
	int *p; 									// Pointer Declaration
	p = &a; 									//Assing the address of 'a' to 'p'
	cout<<a<<endl;
	printf("Using Pointer %d\n", *p); 			// Print the pointed value
	printf("Address of 'a' is %d\n", &a); 		// Print the addresss of integer
	printf("Value and Addres  %d %d\n", *p ,p); // Method to print more datas
	
	// Pointer to an Array
	int B[5] = {34,1,53,3,23}; 
	int *C; 									// Pointer Declaration
	C = B; 										// Point the data of B to the poiter C
	for (int i=0;i<5;i++){
		cout<<C[i]<<endl; 						// Using for loop print the pointed data
	}
	 
	// Assign the pointer inside the Stack and array inside the Heap 
	int *D; 									// Pointer Declaration
	D = (int *)malloc(5*sizeof(int));			// Point the data of B to the poiter C
	D[0]=23; D[1]=32; D[2]=45; D[3]=76; D[4]=90;
	for (int i=0;i<5;i++){
		cout<<D[i]<<endl; 						// Using for loop print the pointed data
	}
	
	// Assign Array inside the Heap in C++ 
	int *E;
	E = new int[5];
	E[0]=23; E[1]=32; E[2]=45; E[3]=76; E[4]=90;
	for (int i=0;i<5;i++){
		cout<<E[i]<<endl; 						// Using for loop print the pointed data
	}
	
	// Dynamic allocation 
	// Whenever we alocate dynamic memory we have to delete that memory after using it 
	int *F;
    F = new int[5];//Allocate dynamic memory in Heap,C++ language
    delete [] F; //C++ Deallocating memory which was allready allocated 
    free(F);   //C
    
    // pointer takes same amount of memory whatever the pointer is that 
    // Eg: int , char, float , double , struct 8bytes in latest compilers
}

