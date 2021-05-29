// Funtion is group of related instructions to perform a specific task. 
// Beark a program into small part and combine everythig, this is  very easy to work as group project.

#include<iostream>
using namespace std;

int add(int a, int b){ // int = return type, add = name of the function , a and b are formal parameters (Temperary parameters).
	int c = a+b;
	return c;
}

int main(){
	int num1=23, num2=45, sum;
	sum = add(num1,num2); // Function call , num1 and num2 are Actual parameters
	cout<<"Sum is "<<sum<<endl;
	
}
