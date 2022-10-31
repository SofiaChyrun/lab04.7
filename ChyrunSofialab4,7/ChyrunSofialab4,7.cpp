// ChyrunSofialab4,7.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_04_7.cpp
// < Чирун Софія >
// Лабораторна робота № 4.7
//  Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень
// Варіант 18

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double xp, xk, x, dx, eps, a, b, R, S;
	int n;
	cout << "xp > 0, xp = "; cin >> xp;
	cout << "xk <=2, xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;
	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(10) << "log(x)" << " |"
		<< setw(7) << "S" << "    |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		n = 0; 
		S = 0;
		do {
			
			a = x - 1;
			b = n + 1;
			R = (pow((-1), n) * pow(a, b)) / b;
			S += R;
			n++;
		} while (abs(R) >= eps);
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x) << " |"
			<< setw(10) << setprecision(5) << S << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += dx;
	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}