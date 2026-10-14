/*
Program : Sum of first 50 natural numbers
Name : Muhammad Abu Zar
Reg No : L1F25BSCS0248
Assignment : 01 - Getting Started with GitHub
*/
#include <iostream>
using namespace std;

int main()
{
	const int N = 50;
	int sum = 0;

	for (int i = 1; i <= N; i++)
	{
		sum += i;
	}
	cout << " Sum of first " << N << " natural numbers (loop): " << sum << endl;
	return 0;
}
