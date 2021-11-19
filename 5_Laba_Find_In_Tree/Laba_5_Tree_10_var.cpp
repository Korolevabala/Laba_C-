#include <iostream>
// #include </usr/include/SFML/Graphics.hpp>

using namespace std;

bool	ft_check_graph()
{
	int		size;  // размерность массива
	int		j;	   // временная переменная для следующей вершины
	int		current; // текущая вершина
	int		begin; // вершина всего
	int 	last; // прошлая вершина
	bool	visited[10] = {false, false, false, false, false, false, false, false, false, false,}; // массив посещенных вершин
	int		arr[10][10] //граф
	{
		{0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
		{1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
		{1, 0, 0, 0, 0, 1, 0, 0, 0, 0},
		{1, 0, 0, 0, 0, 0, 1, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 0, 0, 0, 1, 1, 1},
		{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
		{0, 0, 0, 0, 0, 0, 1, 0, 0, 0}
	};
	size = sizeof(arr) / sizeof(arr[0]);
	begin = size - 1;
	j = size - 1;
	current = begin;
	last = current;
	while(visited[begin] == false)
	{
		if (j == current && current > 1)
			j--;
		if (arr[current][j] == 1)
		{
			if (visited[j] == false)
			{
				if (last == j)
				{
					j--;
					continue;
				}
				else
				{
					last = current;
					current = j;
					j = size - 1;
					continue;
				}
			}
			else
				j--;
		}
		else
			j--;
		if (j < 0)
		{
			j = size - 1;
			visited[current] = true;
			current = begin;
			last = begin;
		}
	}
	while(j > 0)
	{
		if(visited[j] == false)
			return (false);
		j--;
	}
	return (true);
}

int main()
{
	if (ft_check_graph())
		cout << "связный";
	else
		cout <<  "несвязный";
	return (0);
}