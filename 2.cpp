#include <iostream>
#include <string>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    int i, j;
    char n;
    i = 0;
    string Napr[4]{"�����", "�����", "��", "������"};
    
    cout << "������� �����������: ";
    cin >> n;
    if (n == '�'){
    	j = 2;
	}
	if (n == '�'){
    	j = 0;
	}
	if (n == '�'){
    	j = 3;
	}
	if (n == '�'){
    	j = 1;
	}
	cout << "������� ������� ��������: ";
	cin >> i;
	j += i;
	j = j == -1 ? 3: j == 4? 0: j;
	cout << Napr[abs(j % 4)];
}

