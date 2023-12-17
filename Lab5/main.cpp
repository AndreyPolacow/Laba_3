
#include<iostream>
#include<cmath>

import Math;
using namespace Math;


int main()
{
	int z, r, x,u = 23;

	std::cout << "Vvod z,r,x";
	std::cin >> z >> r >> x;
	Complex fun1 = f((Complex)z);
	Rational fun2 = f((Rational)r);
	double fun3 = f(x);
	std::cout << "Complex: " << fun1  << std::endl;
	std::cout << "Rational: " << fun2 << std::endl;
	std::cout << "Double: " << fun3 << std::endl;
	return 0;
}