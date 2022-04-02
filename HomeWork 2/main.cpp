#include<iostream>
using namespace std;

//#define FIBANACHI
//#define PTIME_NUMBERS		//не мое решение (простые числа)
//#define TABLICA			//не мое решение (таблица умножения)

void main()

{
	setlocale(LC_ALL, "Russian");
#ifdef FIBANACHI
	
	int a = 0;
	int b = 1;
	int c = 1;
	
	
	while (b<=1000)
	{
		cout << a << "\t";
		a = b;
		b = c;
		c = a + b;
	}
	cout << endl;
#endif

#ifdef PTIME_NUMBERS
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0 || i % 3 == 0 || i % 7 == 0)
		{
			continue;
		}
		cout << i << "t";
	}
	cout << endl;

#endif

#ifdef TABLICA
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		cout << i * j << "\t";
		cout << endl;
	}
	
#endif
}
