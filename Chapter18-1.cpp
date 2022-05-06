#include "std_lib_facilities.h"

// drill 1
// define a global int array ga of ten ints initialised to 1, 2, 4, 8, 16, etc
int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

// drill 2
// Define a function f() taking an int array argument
// and an int argument indicating the number of elements in the array

// drill 3
void f(int a[], int n)
{
	// a. Define a local int array la of ten ints.
	int la[10];
	// b. Copy the values from ga into la.
	for (int i = 0; i < n; ++i)
		la[i] = ga[i];

	// c. Print out the elements of la.
	for (int i = 0; i < n; ++i)
		cout << la[i] << ", ";
	cout << endl;

	// d. Define a pointer p to int and initialise it with an array allocated
	//on the free store with the same number of elements as the argument array
	int* p = new int[n];
	// e. Copy the values from the argument array into the free-store array.
	// Copy contents of a to p
	memcpy(p, a, n * sizeof(int));
	// f. Print out the elements of the free-store array.
	for (int i = 0; i < n; ++i)
		cout << p[i] << ", ";
	cout << endl;

	// g. Deallocate the free-store array.
	delete[] p;
}

int fac(int n)
{
	return n > 1 ? n * (fac(n - 1)) : 1;
}

// drill 4
int main()
{
	// a.Call f() with ga as its argument.
	f(ga, 10);

	// b.Define an array aa with ten elements, and initialise it with 
	// the first ten factorial values(1, 2 * 1, 3 * 2 * 1, 4 * 3 * 2 * 1, etc).
	int aa[10]{ 1, fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10) };

	// c.Call f() with aa as its argument;
	f(aa, 10);

	keep_window_open();
	return 0;
}