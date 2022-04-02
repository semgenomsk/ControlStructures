#include<iostream>
using namespace std;

//#define FOR_SYNTAX
//#define FAKTORIAL
//#define POW
#define ASCII

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef FOR_SYNTAX
	int n; // количество итераций
	cout << "¬ведите количество итераций: "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
}
#endif // FOR_SYNTAX

#ifdef FACTORIAL
int n;		//число дл€ вычислени€ факториала
double f = 1;		//факториал числа
cout << "¬ведите число дл€ вычислени€ факториала: "; cin >> n;
for (int i = 1; i <= n; i++)
{
	cout << i << "!=";
	f *= i;
	cout << f << endl;
}
cout << endl;
#endif

#ifdef POW
	int a;	//основание степени
	int n;	//показатель степени
	int N = 1;	//степнь
	cout << "¬ведите основание числа: "; cin >> a;
	cout << "¬ведите показатель числа: "; cin >> n;
	if (n < 0)
	{
	a = 1 / a;	//отправл€ем основание в знаменатель
	n = -n;		//мен€ем знак на противоположный
	}
		for (int i = 0; i < n; i++)
	{
	N *= a;
	}
	cout << N << endl;
	#endif POW


#ifdef ASCII
	cout << "“аблица ASCII-символов:\n";
	setlocale(LC_ALL, "C");	//устанавливает кодировку по умолчанию
	for (int i = 0; i < 256; i++)
	{
		if (i%16 == 0) cout << endl;
		cout << (char)i << " ";
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "¬от и сказочке конец" << endl;

#endif ASCII
}
