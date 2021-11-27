#include <stdio.h>
#include <Windows.h>

int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
   int n;
   printf("кол-во:") ;
   scanf ("%i", &n);
 
   if (n/10==1)
        switch (n) {
        case 10:
                printf("десять учебных заданий. \n");
                break;
            case 11:
                printf("одинадцать учебных заданий.\n");
                break;
        case 12:
                printf("двенадцать учебных заданий.\n");
                break;
        case 13:
                printf("тринадцать учебных заданий.\n");
                break;
        case 14:
                printf("четырнадцать учебных заданий.\n");
                break;
        case 15:
                printf("пятнадцать учебных заданий.\n");
                break;
        case 16:
                printf("шестнадцать учебных заданий.\n");
                break;
        case 17:
                printf("семнадцать учебных заданий.\n");
                break;
        case 18:
                printf("восемнадцать учебных заданий.\n");
                break;
        case 19:
                printf("девятнадцать учебных заданий.\n");
                break;
        }
    else {
        switch (n/10) {
            case 2:
                printf("двадцать ");
                break;
            case 3:
                printf("тридцать ");
                break;
            case 4:
                printf("сорок ");
                break;
        }
 
        switch (n%10) {
        case 1:
            printf("одно ");
            break;
        case 2:
            printf("два ");
            break;
        case 3:
            printf("три ");
            break;
        case 4:
            printf("четыре ");
            break;
        case 5:
            printf("пять ");
            break;
        case 6:
            printf("шесть ");
            break;
        case 7:
            printf("семь ");
            break;
        case 8:
            printf("восемь ");
            break;
        case 9:
            printf("девять ");
            break;
        }
 
        switch (n%10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("учебных заданий.\n");
            break;
        case 1:
            printf("учебное задание.\n");
            break;
        case 2:
        case 3:
        case 4:
            printf("учебных задания.\n");
            break;
        }
  }
   return 0;
}
