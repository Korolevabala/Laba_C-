#include <iostream>
using namespace std;

void input_mass(int *mass, int n)
{
    int position;

    position = 0;
    while (position < n)
    {
        cout << "Введите элемент номер - " << position + 1 << "\n";
        cin>>mass[position];
        ++position;
    }
}

int find(int *mass, int n)
{
    int position;
    bool f;
    int sum;

    f = false;
    sum = 1;
    n--;
    while (n > 0)
    {
        if ( n >= 1 && ((mass[n - 1] > 0 && mass[n] < 0) ||(mass[n - 1] < 0 && mass[n] > 0)))
        {
            sum++;
            f = true;
        }
        else
        {
            if(f)
                break;
        }
        n--;
    }
    if (sum == 1)
        sum = 0;
    return (sum);
}

int delete_elem (int *mass, int n, int index)
{
    int *new_mass;
    int i;
    int j;

    new_mass = new int[n - 1];
    i = 0;
    j = 0;
    while (i < n)
    {
        if (i == index)
            i++;
        new_mass[j] = mass[i];
        j++;
        i++;
    }
    i = 0;
    while(i < n - 1)
    {
        mass[i] =new_mass[i];
        i++;
    }
    delete[] new_mass;
    return *mass;
}

int main()
{
    int n;
    int position;
    int sum;
    int *mass;
    int time_n;
    int for_output;
    bool finder;

    cout << "Введите размер массива\n";
    cin>>n;
    input_mass(mass,n);
    sum = find(mass,n);
    for_output = n - sum;
    time_n = n;
    n--;
    while(n > 0)
    {
//        if (n >= 1 && ((mass[n - 1] > 0 && mass[n] < 0) || (mass[n - 1] < 0 && mass[n] > 0)))
        if (mass[n] > 0 && mass[n-1] < 0 || mass[n] < 0 && mass[n-1] > 0)
        {
            finder = true;
            position = n - 1;
        }
        else
        {
            if (finder == true)
                break;
        }
        --n;
    }
    if(sum == time_n || sum == 0)
        return (0);
    while(sum > 0)
    {
            delete_elem(mass, time_n, position);
            sum--;
            time_n--;
    }
    position = 0;
    while (position < for_output)
    {
        cout << mass[position] <<" = mass["<<position<<"]"<<"\n";
        position++;
    }
    return (0);
}