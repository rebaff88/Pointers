//Concept basics : 
#include<iostream>
using namespace std;
int main() {
	//lets do some basic knowledge regarding pointers 
	int AddressVariable = 20;
	//AddressVariable is such a variable in which a value of 20
	//is stored and it has a  certain address
	//Now lets create a pointer of this variable
	int* ptr = &AddressVariable;
	//now pyr is the pointer of the above variable
	cout << AddressVariable << endl;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << &AddressVariable << endl;
	cout << &ptr << endl;//address of ptr itself
	return 0;
}

//pointers in arrays
#include<iostream>
using namespace std;
int main() {
	//Case if array which is a pointer itself
	int n[5] = { 1,2,3,4,5 };
	int size = 5;
	for (int i = 0; i < size; i++) {
		cout << n[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << *(n + i) << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << (n + i) << " ";
	}
	cout << endl;
	//same output with help of ptr : 
	int* ptr = n;
	for (int i = 0; i < size; i++) {
		cout << (ptr + i) << " ";
	}
	return 0;
}

//Concept 3:
#include<iostream>
using namespace std;
int main() {
	//increment in diffrent data types :
	//+4  bytes in int 
	//+1 byte in char
	int p = 10;
	int* ptrp = &p;
	cout << *ptrp << endl;
	cout << ptrp << endl;
	cout << &p << endl;
	cout << ptrp+1 << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	char c = 'a';
	char* ptrc = &c;
	cout << *ptrc << endl;
	cout << ptrc << endl;
	cout << &c << endl;
	cout << ptrc + 1 << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	bool b = true;
	bool* ptrb = &b;
	cout << *ptrb << endl;
	cout << ptrb << endl;
	cout << &b << endl;
	cout << ptrb + 1 << endl;
	return 0;
}

