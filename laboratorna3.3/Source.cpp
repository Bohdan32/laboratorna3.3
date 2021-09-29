// Lab_03_3.cpp
// Дякун Богдан
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;
	
	// розгалуження в повній формі
	if (x <= -6)
		y = 0;
	else
		if (-6 < x && x <= 0)
			y = -((R*x + 6*R) / 6);
		else
			if (0 < x && x <= R)
				y = sqrt(R * R - x * x);
			else
				if (R < x && x <= 2 * R)
					y = sqrt(R * R - x * x + 4 *(R * R));
				else
					y = R;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}