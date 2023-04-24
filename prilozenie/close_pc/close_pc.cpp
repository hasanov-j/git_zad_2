#include <iostream>
#include "locale.h"
#include "string.h"
#include "malloc.h"
#include <stdlib.h>
using namespace std;

void timer() {
    // std::cout << getchar() new features;
    int minute;

    setlocale(LC_ALL, "Russian");
begin:
    printf("------------------------------------------------------------\n\n");
    printf("\t\tТАЙМЕР ВЫКЛЮЧЕНИЯ ПК\n\n");
    printf("Справка:\r\n");
    printf("-для отключения таймера введите колличество минут равное нулю\r\n");
    printf("------------------------------------------------------------\n\n\n");
    printf("Введите количество минут:");
    scanf_s("%i", &minute);
    if (minute == 0)
    {
        printf("Таймер будет выключен:\n\n");
        printf("-ENTER для подтверждения\n");
        printf("-ESC для выхода");
        int confirmation = getchar();
        if (getchar() == 10)
        {
            system("shutdown /a");
            system("cls");
            goto begin;
        }
        else
        {
            system("cls");
            goto begin;
        }
        /*else if (getchar() == 27)
        {
            system("cls");
            goto begin;
        }*/

    }
    else
    {

        printf("Таймер будет установлен на %i минут:\n\n", minute);
        printf("-ENTER для подтверждения\n");
        printf("-ESC для выхода");
        int confirmation = getchar();
        if (getchar() == 10)
        {
            int second = minute * 60;
            char second_string[50];
            sprintf_s(second_string, "%d", second);
            char close_pc[75] = "shutdown /s /t ";
            strcat_s(close_pc, second_string);
            system("shutdown /a");
            system(close_pc);
            system("cls");
            goto begin;
        }
        else
        {
            system("cls");
            goto begin;
        }
        /*else if (getchar() == 27)
        {
            system("cls");
            goto begin;
        }*/
    }

}



int main()
{
    char i;

    //for (i = 1; i <= 50; i++) {
    //    printf("%15d", rand());
    //    if (i % 5 == 0) printf("\n");
    //}



    int size = 0;

    cin >> size;
  
    //int array[size];

    //CИ
    {
        int* p = NULL;
        int* p2 = NULL;

        p = (int*)malloc(size * sizeof(int));
        p2 = (int*)calloc(3, sizeof(int));
        free(p);
        free(p2);

        for (int i = 0; i < size; i++) {
            cin >> *(p + i);
        }

        for (int i = 0; i <= size; i++) {
            cout << *(p + i) << endl;
        }
    }

    //CИ++
    {
        int* p3 = NULL;
        char* p4 = NULL;

        p3 = new int[size];
        p4 = new char[size];
      
        delete[] p3;
        delete[] p4;

        for (int i = 0; i < size; i++) {
            *(p3 + i) = i;
        }

        for (int i = 0; i <= size; i++) {
            cout << *(p3 + i) << endl;
        }
    }

    //с помощью cin и cout создать все вариации массив с функциями заполнения и печати данных
    /*
        1. Заданы два массива А(N) и В(M). Первым на печать вывести массив, сумма значений которого окажется наименьшей. Элементы массива заполняются рандомно, так же их количество от 10 до 100 элементов.
    */
}