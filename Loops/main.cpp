#include<iostream>
#include<conio.h>	//_getch();
using namespace std;

//#define WHILE
#define DO_WHILE

void main()
{
	setlocale(LC_ALL, "Russian");
#if defined WHILE

	int n;	//���������� ���������� (���������� - ����������� ��������� ����
	int i = 0;	//������� ����� (������� ������� ��� ����� �������� ����)
	cout << "������� ���������� ��������: "; cin >> n;
		while (i < n)
	{
			cout << i << "Hello" << endl;
			i++;
	}
#endif

#if defined DO_WHILE
		char key;	//������ ��� �������
		do
		{
			key = _getch();	//������� ������� ������� � ���������� ASCII-��� ������� �������
			cout << (int)key << "\t" << key << endl;
			//(int)key - ����� �������������� ����� char � int
		} while (key != 27);


#endif
}





