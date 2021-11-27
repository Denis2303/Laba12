#include <iostream>
#include <string>
using namespace std;
int main()
{
    string colors[] = { "green", "red", "yellow", "white", "black" };
    string animals[] = { "rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "goat", "monkey","rooster", "dog", "pig" };
 
    int year, a, b, c;
    cin >> year;
 
    a = (year - 4) % 60;
    b = a / 12;
    c = a % 12;
    if (year == 0)
        cout << "Year of the monkey black" << endl;
    else
        cout << "Year of the " << animals[c] << " " << colors[b];
    getchar();
    getchar();
    return 0;
}
