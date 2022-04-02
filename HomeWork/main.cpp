#include<iostream>
#include<conio.h>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

//#define PALINDROME
//#define SHOOTER
//#define SHOOTER_2
#define TICKET_NUMBER


void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef PALINDROME
	int number; // ����� �������� � ����������
	int reverse = 0; // �������� ������ ���������� �����
	cout << "������� �����: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10; // ����������� ����� ��� ������� ������
		reverse += buffer % 10; // �������� ������� ������ �����, � ��������� ���
		buffer /= 10; // ������� ����������� ������

	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "����� ���������" << endl;
	}
	else
	{
		cout << "����� �� ���������" << endl;
	}
#endif

#ifdef SHOOTER
	char key;	//��� �������
	do
	{
		key = _getch();
		cout << int(key) << "\t" << key << endl;
		if (key == 'w' || key == 'W') cout << "������" << endl;
		else if (key == 's' || key == 'S') cout << "�����" << endl;
		else if (key == 'a' || key == 'A') cout << "�����" << endl;
		else if (key == 'd' || key == 'D') cout << "������" << endl;
		else if (key == 32) cout << "������" << endl;
		else if (key == 13) cout << "�����" << endl;
		else cout << "Error: ��� ������ ��������" << endl;

	} while (key != 27);
#endif

#ifdef SHOOTER_2
	char key;

	key = _getch();
	switch (key)
	{
	case 119: cout << "�����" << endl;
		break;
	case 115: cout << "�����" << endl;
		break;
	case 97: cout << "�����" << endl;
		break;
	case 100: cout << "������" << endl;
		break;
	case 32: cout << "������" << endl;
		break;
	case 13: cout << "������" << endl;
		break;
	default:cout << "Error: ��� ������ ��������" << endl;
	}

#endif

#ifdef TICKET_NUMBER
	int number;
	cout << "������� ����� ������: "; cin >> number;
	int sum1 = 0;
	int sum2 = 0;
	while (number >= 1000)
	{
		sum1 += number % 10;
		number /= 10;
	}
	while (number)
	{
		sum2 += number % 10;
		number /= 10;
	}
	cout << sum1 << endl;
	cout << sum2 << endl;
	if (sum1 == sum2)
	{
		cout << "����� ����������" << endl;
	}
	else
	{
		cout << "��������� � ���� ���" << endl;
	}

#endif
}