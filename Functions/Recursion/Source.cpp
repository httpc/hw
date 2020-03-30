#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
int fib(int n);

void main()
{
	setlocale(LC_ALL, "");
	/*cout << "Hello world!";
	int floor;
	cout << "�� ����� ����� �� ����������: "; cin >> floor;
	elevator(floor);
	cout << factorial(5) << endl;*/
	int n;
	cin >> n;
	cout << fib(n);
}
void elevator(int floor)
{
	cout << "you are on the " << floor << " floor;\n";
	if (floor == 0)return;
	elevator(floor - 1);
	cout << "you are on the " << floor << " floor;\n";
}
int factorial(int n)
{
	if (n < 0)return 0;
	if (n == 0)return 1;
	else return factorial(n - 1) * n;
}
double power(double a, int n)
{
	if (n == 0)	return 1;
	if (n < 0)
	{
		return  1 / a * power(a, n + 1);
	}
	else
	{
		return power(a, n - 1) * a;
	}
}
int fib(int n)
{
	if (n < 1) return 0;
	if (n == 1) return 1;
	return fib(n - 1) + fib(n - 2);
}
