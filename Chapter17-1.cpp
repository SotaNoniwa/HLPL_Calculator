#include "std_lib_facilities.h"

void printArray10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << "Int " << i << ": " << a[i] << "	Addr: " << &a[i] << endl;
}

void printArray(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << "Int " << i << ": " << a[i] << "	Addr: " << &a[i] << endl;
}

int* allocateArray(int n)
{
	int* a = new int[n];
	int counter = 100;
	for (int i = 0; i < n; ++i)
		a[i] = counter++;

	return a;
}

vector<int*> allocateVector(int n)
{
	vector<int*> temp;
	int counter = 100;
	for (int i = 0; i < n; ++i)
		temp.push_back(new int{ counter++ });

	return temp;
}

void printVector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		cout << "Int " << i << ": " << *v[i] << "	Addr: " << v[i] << endl;
}

void deleteVector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		delete v[i];
}

int main()
{
	// drill 1 - Allocate an array of ten ints on the free store using new
	int* tenInts = new int[10];

	// drill 2 - Print the values of the ten ints to cout.
	// Every elements of array havn't initialized, so it's filled with garbage
	for (int i = 0; i < 10; ++i)
		cout << "Int " << i << ": " << tenInts[i] << "	Addr: " << &tenInts[i] << endl;

	// drill 3 - Deallocate the array
	//delete[] tenInts;

	// drill 4 - Print the values of the ten ints by using a function
	cout << "---------------------------------" << endl;
	printArray10(cout, tenInts);
	delete[] tenInts;

	// drill 5 - Allocate an array of ten ints on the free store
	// Initialize it with the values 100,101,102,etc and print out its valeus
	int* tenInts2 = new int[10]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 };
	cout << "---------------------------------" << endl;
	printArray10(cout, tenInts2);
	delete[] tenInts2;

	// drill 6 + 7
	// Allocate an array of 11 ints on the free store
	// Print the values of the 11 ints by using a function
	int* intArray = new int[11]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110 };
	cout << "---------------------------------" << endl;
	printArray(cout, intArray, 11);
	delete[] intArray;

	// drill 8
	// Allocate an array of 20 ints on the free store
	// Print the values of the 20 ints by using a function
	int* twentyInts = allocateArray(20);
	cout << "---------------------------------" << endl;
	printArray(cout, twentyInts, 20);
	delete[] twentyInts;

	// drill 10
	// Do drill 5, 6 and 8 using a vector instead of an array
	// and print_vector instead of print_array
	vector<int*> v_tenInts = allocateVector(10);
	cout << "---------------------------------" << endl;
	printVector(v_tenInts);
	deleteVector(v_tenInts);

	vector<int*> v_11Ints = allocateVector(11);
	cout << "---------------------------------" << endl;
	printVector(v_11Ints);
	deleteVector(v_11Ints);

	vector<int*> v_20Ints = allocateVector(20);
	cout << "---------------------------------" << endl;
	printVector(v_20Ints);
	deleteVector(v_20Ints);

	keep_window_open();
	return 0;
}