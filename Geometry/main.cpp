#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define ROMB
#define PLUS_MINUS

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "������� �����: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	cout << endl;
#endif // TRIANGLE_2

#ifdef TRIANGLE_3	//�� �� �����
	
	for (int i = 0; i < n; i++)
	{
		for(int j=0; j<i; j++ )
		cout << "  ";
		for (int j = i; j< n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_3

#ifdef PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//cout << "* ";
			//if (i%2 ==  j%2)cout << "+"; else cout << "-";
			//(i % 2 == j % 2) ? cout << "+ " : cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS




}