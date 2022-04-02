#include<iostream>
using namespace std;

//#define MULTIPLICATION_TABLE		//таблица умножени€
#define PYTHAGORAS_TABLE			//таблица ѕифагора
//#define SIMPLE_NUMBERS				//простые числа
//#define FIGURE_1
//#define FIGURE_2

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef MULTIPLICATION_TABLE		

	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}
#endif MULTIPLICATION_TABLE


#ifdef PYTHAGORAS_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}

#endif PYTHAGORAS_TABLE


#ifdef SIMPLE_NUMBERS
	int n;		//предел, до которого мы будем выводить простые числа
	cout << "¬ведите число: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		bool simple = true;	//предполагаем что число простое
		//но это нужно проверить:
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0) simple = false;
		}
		if(simple)cout << i << "\t";
	}
#endif // SIMPLE_NUMBERS

#ifdef FIGURE_1
	
	int n = 5;
	for (int i = 1; i <= n; i++)
	{
		cout << endl;
		for (int j = 1; 
			j <= n; 
			j++)
		{
			cout << "*";
		}
	}
	cout << endl;
#endif

#ifdef FIGURE_2
	int n = 5;
	for (int i = 1; i <=n ; i++)
	{
		cout << endl;
		for (int j = 1; j <= n; j++)
			if (i < 1 && i > 4)
			{
				cout << "*";
			}
			else 
		{
			cout << "*";
		}
	}
	cout << endl;
#endif // FIGURE_2

}