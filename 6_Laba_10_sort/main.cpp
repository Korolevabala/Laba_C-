#include <iostream>

using namespace std;

void	ft_sort_mass_quick(int*	mass, int	left, int	right);
void	ft_print_mass(int*	mass, int n);
void	ft_delete_one(int*	mass, int n);
int*	ft_del_elem(int*	mass,int n, int pos);

void	ft_create_mass()
{
    int		n;
	int 	position;
    int*    mass;

	cout << "Введите колиество элементов ";
	cin >> n;
	position = 0;
    mass = new int[n];
	while(position < n)
	{
		cout << "введите элемент "<< position + 1 << "\n";
		cin >> mass[position];
		position++;
	}
	ft_sort_mass_quick(mass, 0, n - 1);
	ft_delete_one(mass, n);
}

void	ft_sort_mass_quick(int*	mas, int first, int last)
{
	int mid;
	int count;
	int f;
	int	l;

	f = first;
	l = last;
	mid=mas[(f+l) / 2];
	do
	{
	while (mas[f]<mid) f++;
	while (mas[l]>mid) l--;
	if (f<=l)
	{
		count=mas[f];
		mas[f]=mas[l];
		mas[l]=count;
		f++;
		l--;
	}
	} while (f<l);
	if (first<l) ft_sort_mass_quick(mas, first, l);
	if (f<last) ft_sort_mass_quick(mas, f, last);
}

int*	ft_del_elem(int*	mass,int n, int pos)
{
	int*	arr;
	int	i;

	i = 0;
	arr = new int[n - 1];
	while(i < pos)
	{
		arr[i] = mass[i];
		i++;
	}
	pos++;
	while (pos < n)
		arr[i++] = mass[pos++];
	return (arr);
}

void    ft_delete_one(int*	mass, int n)
{
	int	*new_mass;
	int	i;

	i = 0;
	new_mass = mass;
	while (i < n - 1)
	{
		if (new_mass[i] == new_mass[i + 1])
		{
			new_mass = ft_del_elem(new_mass, n, i + 1);
			n--;
			i = 0;
		}
        else
		    i++;
	}
	ft_print_mass(new_mass, n);
}
void	ft_print_mass(int*	mass, int n)
{
	int	i;

	i = 0;
	cout << "Результат соритровки: ";
	while (i < n)
	{
		cout << mass[i];
		if (i != n-1)
			cout <<", ";
		i++;
	}
}

int main()
{
	ft_create_mass();
	return (0);
}