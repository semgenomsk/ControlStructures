#include<iostream>
#include<conio.h>
using namespace std;


#define UP_ARROW 72
#define DOWN_ARROW 80
#define LEFT_ARROW 75
#define RIGHT_ARROW 77
#define SPACE ' '
#define ENTER 13
#define ESCAPE 27


void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Shooter" << endl;

	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UP_ARROW: case 'w': case 'W': cout << "������" << endl; break;
		case DOWN_ARROW: case 's': case 'S': cout << "�����" << endl; break;
		case LEFT_ARROW: case 'a': case 'A': cout << "�����" << endl; break;
		case RIGHT_ARROW: case 'd': case 'D': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case ENTER: cout << "�����" << endl; break;
		case ESCAPE: cout << "�����" << endl;
		case -32: break;
		default: //if (key != Escape && key !=-32)
			cout << "Error" << endl;
		}
	} while (key != ESCAPE);
}


	