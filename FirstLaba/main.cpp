#include <iostream>
#include <stdlib.h>
#define MAXIMUM 2147483647
using namespace std;

void my_sum(int *mass, int n)
{
    int position;
    int sum;
    bool finder;

    position = 0;
    sum = 0;
    finder = false;
    while (position < n)
    {
        if(finder)
            sum += mass[position];
        if(mass[position] < 0)
            finder = true;
        ++position;
    }
    printf("sum = %d\n",sum);
}
int modul_digit(int digit)
{
    if (digit < 0)
        digit *= (-1);
    return (digit);
}
void mass_input(int *mass, int n)
{
    int position;

    position = 0;
    while (position < (n))
    {
        cout << "Введите элемент номер-"<< position <<"\n";
        cin >> mass[position];
        ++position;
    }
}

int min_object(int *mass, int n, int *mesto,int first)
{
    int position;
    int min;

    min = MAXIMUM;
    position = first;
    while(position < (n))
    {
       if(modul_digit(mass[position]) < modul_digit(min))
       {
           min = mass[position];
           *mesto = position;
       }
        ++position;
    }
    return (min);
}

int min_obj(int *mass, int n, int *mesto,int first)
{
    int position;
    int min;

    min = MAXIMUM;
    position = first;
    while(position < (n))
    {
        if(mass[position] < min)
        {
            min = mass[position];
            *mesto = position;
        }
        ++position;
    }
    return (min);
}

void my_sort(int *mass, int n)
{
    int position;
    int i;
    int digit;

    position = 0;
    while (position < n - 1)
    {
        digit = mass[position];
        mass[position] = min_obj(mass, n, &i, position );
        mass[i] = digit;
        ++position;
    }
}
int main()
{
    int *mass;
    int n;
    int *i;
    int min;
    int pos;

    cout << "Введите количество элементов\n";
    cin >> n;
    mass = (int *) malloc(sizeof(int) * (n));
    mass_input(mass, n);
    min = min_object(mass, n, i,0);
    printf("min = %d\n", min);
    my_sum(mass, n);
    my_sort(mass, n);
    pos = 0;
    while(pos < n)
    {
        printf("%d\n",mass[pos]);
        pos++;
    }
    free(mass);
    return (0);
}
