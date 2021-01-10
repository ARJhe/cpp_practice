#include <bits/stdc++.h>
using namespace std;
int main(){
	int ival = 2;
	int *pi = 0;					// initialize with no object in the address pointed.
	cout << "pi: " << pi << '\n';	// 0
	//cout << "*pi: " << *pi << '\n'; // execute will stop here cause of pointer point to nothing.
	pi = &ival;						// pointers' value is refer to ival
	cout << "pi refer to ival: " << *pi << '\n';  // 2
	*pi = 3;						// assign value to point and change value of reference ival
	cout << "assign *pi with 0: " << *pi << '\n'; // 3
	cout << "ival: " << ival << '\n';			  // 3
	
}

