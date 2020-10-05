/* C++ program to implement basic stack operations */
#include<iostream>  
  
using namespace std; 

#define max 100 

class Stackdemo { 
	int top; 

public: 
	int a[max]; // Maximum size of Stack 

	Stackdemo() { top = -1; } 
	bool push(int x); 
	int pop(); 
	int display(); 
	bool isEmpty(); 
}; 

bool Stackdemo::push(int x) 
{ 
	if (top >= (max - 1)) { 
		cout << "Stack Overflow"; 
		return false; 
	} 
	else { 
		a[++top] = x; 
		cout << x << " pushed into stack\n"; 
		return true; 
	} 
} 

int Stackdemo::pop() 
{ 
	if (top < 0) { 
		cout << "Stack Underflow"; 
		return 0; 
	} 
	else { 
		int x = a[top--]; 
		return x; 
	} 
} 
int Stackdemo::display() 
{ 
	if (top < 0) { 
		cout << "Stack is Empty"; 
		return 0; 
	} 
	else { 
		int x = a[top]; 
		return x; 
	} 
} 

bool Stackdemo::isEmpty() 
{ 
	return (top < 0); 
} 

// Driver program to test above functions 
int main() 
{ 
	Stackdemo s; 
	s.push(10); 
	s.push(20); 
	s.push(30); 
	cout << s.pop() << " Popped from stack\n"; 
	s.display();
	return 0; 
} 

