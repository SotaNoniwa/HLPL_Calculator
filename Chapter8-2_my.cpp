//my.cpp

#include "Chapter8-2_my.h"


//swap two integers using pass-by-value
void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << a << '\t' << b << endl;

	return;
}

//swap two integers using pass-by-reference
void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << a << '\t' << b << endl;

	return;
}

//swap two integers using pass-by-const-reference
void swap_cr(const int& a, const int& b)
{
	int temp;
	int temp2;

	temp = a;
	temp2 = b;

	swap_r(temp, temp2);

	return;
}

//function to keep the window open
void keepWindowOpen()
{
	char c;
	cout << "\nPress any key to quit: ";
	cin >> c;
}
