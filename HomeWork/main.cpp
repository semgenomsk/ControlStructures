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
	int number; // число вводимое с клавиатуры
	int reverse = 0; // обратная запись введенного числа
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	while (buffer)
	{
		reverse *= 10; // освобождаем место под младший разряд
		reverse += buffer % 10; // получаем младший рзаряд числа, и сохраняем его
		buffer /= 10; // убираем сохраненный разряд

	}
	cout << number << endl;
	cout << reverse << endl;
	if (number == reverse)
	{
		cout << "Число палиндром" << endl;
	}
	else
	{
		cout << "Число НЕ палиндром" << endl;
	}
#endif

#ifdef SHOOTER
	char key;	//код клавиши
	do
	{
		key = _getch();
		cout << int(key) << "\t" << key << endl;
		if (key == 'w' || key == 'W') cout << "Вперед" << endl;
		else if (key == 's' || key == 'S') cout << "Назад" << endl;
		else if (key == 'a' || key == 'A') cout << "Влево" << endl;
		else if (key == 'd' || key == 'D') cout << "Вправо" << endl;
		else if (key == 32) cout << "Прыжок" << endl;
		else if (key == 13) cout << "Огонь" << endl;
		else cout << "Error: нет такого действия" << endl;

	} while (key != 27);
#endif

#ifdef SHOOTER_2
	char key;

	key = _getch();
	switch (key)
	{
	case 119: cout << "Впред" << endl;
		break;
	case 115: cout << "Назад" << endl;
		break;
	case 97: cout << "Влево" << endl;
		break;
	case 100: cout << "Вправо" << endl;
		break;
	case 32: cout << "Прыжок" << endl;
		break;
	case 13: cout << "Прыжок" << endl;
		break;
	default:cout << "Error: нет такого действия" << endl;
	}

#endif

#ifdef TICKET_NUMBER
	int number;
	cout << "Введите номер билета: "; cin >> number;
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
		cout << "Билет счастливый" << endl;
	}
	else
	{
		cout << "Приходите в след раз" << endl;
	}

#endif
}