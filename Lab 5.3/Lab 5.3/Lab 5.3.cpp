#include <iostream>
#include <cmath>
using namespace std;
double h(const double x);
double h1(const double x);
// h1 аналог функції h, але без умови (abs(x) >= 1), створений для простішого обчислення у юніт тесті
int main()
{
	double rp, rk, z;
	int n;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	double dr = (rk - rp) / n;
	double r = rp;
	while (r <= rk)
	{
		z = h(1 + sqrt(r)) + pow(h(1 + r + pow(h(r), 2)), 2);
		cout << r << " " << z << endl;
		r += dr;
	}
	return 0;
}
double h(const double x)
{
	if (abs(x) >= 1)
		return ((1 + cos(x)) / exp((-2) * x));
	else
	{
		double S = 0;
		int n = 0;
		double a = 1;
		S = a;
		double k;
		do
		{
			n++;
			double R = pow(x, 3 * n + 1) / (((3 * n+1) ) * (3 * n) * (3 * n - 1)) ;
			a *= R;
			S += a;
		} while (n < 5);
		return S;
	}
}
double h1(const double x)
	{
		return ((1 + cos(x)) / exp((-2) * x));
	}

