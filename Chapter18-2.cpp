#include "std_lib_facilities.h"

// drill 1
//Define a global vector<int> gv; initialise it with ten ints, 1, 2, 4, 8, 16, etc
vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

//drill 2
//Define a function f() taking a vector<int> argument

//drill 3
void f(vector<int>& v)
{
	// a. Define a local vector<int> lv with the same number of elements as the argument vector
	vector<int> lv(10);

	// b. Copy the values from gv into lv
	lv = v;

	// c. Print out the elements of lv
	for (int i : lv)
		cout << i << ", ";
	cout << endl;

	// d. Define a local vector<int> lv2; initialise it to be a copy of the argument vector
	vector<int> lv2 = v;

	// e. Print out the elements of lv2
	for (int i : lv2)
		cout << i << ", ";
	cout << endl;
}

int fac(int n)
{
	return n > 1 ? n * (fac(n - 1)) : 1;
}

// drill4
int main()
{
	// a. Call f() with gv as its argument
	f(gv);

	// b. Define a vector<int> vv, and initialise it with
	//the first ten factorial values (1, 2*1, 3*2*1, 4*3*2*1, etc.)
	vector<int> vv = { 1, fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10) };

	// c. Call f() with vv as its argument
	f(vv);

	keep_window_open();
	return 0;
}