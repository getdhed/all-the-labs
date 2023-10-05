#include <iostream>
#include<cmath>
#include <ctime>
#include <Windows.h>
using namespace std;
void load(string name, string typepoints, int repeat, int quantity_of_points, int timeout)
{
	for (int i = 0; i < repeat; i++)
	{
		cout << name;
		Sleep(timeout);
		for (int j = 1; j <= quantity_of_points; j++)
		{
			cout << typepoints;
			Sleep(timeout);
			if (j % quantity_of_points == 0)
			{
				system("cls");
			}
		}
	}
}
void choosecolor(int choise)
{
link:
	switch (choise)
	{case 1:system("color 0");
		break;
	case 2:system("color 1");
		break;
	case 3:system("color F2");
		break;
	case 4:system("color 3");
		break;
	case 5:system("color 4");
		break;
	case 6:system("color 5");
		break;
	case 7:system("color 6");
		break;
	default:
		cout << "��������� �������" << endl;
		goto link;
		break;
	}
}
int main()
{
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choise;
	
	back:
	cout << "������ �������� ����?\n";
	cout << "1.��" << endl << "2.���" << endl;
	cin >> choise;
	  
	 if (choise == 1)
	 {
		 cout << "�������� ����:" << endl;
		 cin >> choise; 
		 choosecolor(choise);
	 }
	 else if(choise == 2)
	 {
		 
	 }
	 else
	 {
		 cout << "������" << endl;
		 goto back;
	 }
	double x, y, f, res;
	
	cout << "������� x: ";
	cin >> x;
	cout << "������� y: ";
	cin >> y;
	Sleep(250);
	cout << endl;
	system("cls");
	cout << "������� ��� ������� :" << endl << "1.x^2" << endl << "2.e^x" << endl<<"3.sinh(x)"<<endl;
link:
	cin >> choise;
	Sleep(250);
	system("cls");
	switch (choise)
	{
	case 1:
		f = sinh(pow(x, 2));
		break;
	case 2:
		f = sinh(exp(x));
		break;
	case 3:
		f = sinh(x);
		break;
	default:
		cout << "��������� �������" << endl;
		goto link;
		break;
	}
	cout << "������ �������:" << "\n";
	cout << "     _" << endl;
	cout << "    |" << endl;
	cout << "    | sin(x)+ln(y),   x^2y=0" << endl;
	cout << "    |" << endl;
	cout << "u =< tg^2(f(x)),     2<x^2y<7" << endl;
	cout << "    |" << endl;
	cout << "    | f(x)^2/2+x     �����" << endl;
	cout << "    |_" << "\n\n";
link2:
	cout << "������ �� ������� ���������, ����������� ���������� �� ���������\n\n";
	
	

	if (pow(x, 2) * y == 0)
	{
		cout << "sin(x)+ln(y)\n";
		res = sin(x) + log(y);
	}
	else if (2 < pow(x, 2) * y < 7)
	{
		cout << "tg^2(f(x))\n";
		res = pow(tan(f), 2);
	}
	else
	{
		cout << "f(x)^2/2+x\n";
		res = pow(f, 2) / x + 2;
	}
	cout << "������� ����������?" << endl;
	string choise2;
	cin >> choise2;

	if (choise2 == "��" || choise2 == "��" || choise2 == "��" || choise2 == "yes")
	{
		load("�������� ", "*", 3, 3, 300);
		cout << "���������: " << res << endl;
	}
	else if (choise2 == "���" || choise2 == "���" || choise2 == "���" || choise2 == "no")
	{
		cout << "��� ������ :], ��� ������ ������ �����" << endl;
	}
	else
	{
		cout << "��������� �������";
		goto link2;
	}
	system("pause");
	return (0);
}
