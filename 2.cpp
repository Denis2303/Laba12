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
    string Napr[4]{"север", "запад", "юг", "восток"};
    
    cout << "Введите направление: ";
    cin >> n;
    if (n == 'Ю'){
    	j = 2;
	}
	if (n == 'С'){
    	j = 0;
	}
	if (n == 'В'){
    	j = 3;
	}
	if (n == 'З'){
    	j = 1;
	}
	cout << "Введите сторону движения: ";
	cin >> i;
	j += i;
	j = j == -1 ? 3: j == 4? 0: j;
	cout << Napr[abs(j % 4)];
}

