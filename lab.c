#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	double a, b, wynik;
	char dzialanie;
	int if_statement = 1;

	printf("Podaj liczbe a:");
	scanf_s("%lf", &a);
	printf("Podaj liczbe b:");
	scanf_s("%lf", &b);
	printf("Podaj dzialanie (+ - * /):");
	_flushall();

	scanf_s(" %c", &dzialanie);

	if (if_statement == 1)
	{
		if (dzialanie != '+' && dzialanie != '-' && dzialanie != '*' && dzialanie != '/')
		{
			printf("Niepoprawny symbol dzialania");
			return 1;
		}
		else if (dzialanie == '+')
		{
			wynik = a + b;
		}
		else if (dzialanie == '-')
		{
			wynik = a - b;
		}
		else if (dzialanie == '*')
		{
			wynik = a * b;
		}
		else if (dzialanie == '/')
		{
			wynik = a / b;
		}
	}
	else
	{
		switch (dzialanie)
		{
		case '+':
			wynik = a + b;
			break;
		case '-':
			wynik = a - b;
			break;
		case '*':
			wynik = a * b;
			break;
		case '/':
			wynik = a / b;
			break;
		default:
			printf("Bledny symbol!");
			break;
		}
	}

	printf("%.2f %c %.2f = %.2f", a, dzialanie, b, wynik);
	return 0;
}
