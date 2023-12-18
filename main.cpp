#include<iostream>
using namespace std;

//recursion version
long T(long n)
{
	if (n == 0 || n== 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		return T(n - 1) + T(n - 2) + T(n - 3);
	}
}

//iterative version
long t(long n)
{
	long a = 0;
	long b = 0;
	long c = 1;
	long result = 0;

	if (n == 0 || n == 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	
	for (long i = 3; i <= n; i++)//from 3 to n is the range we need to do iteration
	{
		result = a + b + c;//calculate the next level in the sequence by summing the previous three values a b c

		//update the three values a b c
		a = b;
		b = c;
		c = result;
	}

	return result;
	
}

int main()
{

	int a = 20, b = 50;
	long t_20, t_50;
	t_20 = T(a);
	t_50 = T(b);
	cout << t_20 << "," << t_50 << endl;

	return 0;
}
