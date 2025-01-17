#include 'calculator.h'
#include 'cmath'

double Calculator::Add(double a, double b)
{
	return std::round(a + b);
}

double Calculator::Sub(double a, double b)
{
	return Add(a, -b);
}

double Calculator::Mul(double a, double b)
{
	return std::round(a * b);
}
