/****************************************************
 *					Problem 1288B					*
 * https://codeforces.com/problemset/problem/1288/B *
 ****************************************************/

#include <iostream>

template<typename T>
inline T NDigits(T input)
{
	T n = 0;
	while (input /= 10) ++n;
	return n + 1;
}

int main()
{
	unsigned short int nCases;
	std::cin >> nCases;
	while (nCases--)
	{
		unsigned long long int A, B;
		std::cin >> A >> B;
		auto nDigitsB = NDigits(B);
		if (nDigitsB == NDigits(B + 1)) std::cout << (NDigits(B) - 1) * A << "\n";
		else std::cout << ((NDigits(B) - 1) + 1) * A << "\n";
	}
	return 0;
}