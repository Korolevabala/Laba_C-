#include <iostream>

using namespace std;

struct my_list
{
    string 		data;
    my_list*	next;
};

my_list*	ft_create_element()
{
    my_list*	element;

	element = new my_list();
	element->next = NULL;
	return(element);
}

my_list*	ft_create_list()
{
	int	i;
	string	str;
	bool	b;
	my_list*	head;
	my_list*	current;
	my_list*	tmp;

	cout << "Введите кол-во элементов\n";
	cin >> i;
	b = true;
	while (i > 0)
	{
		i--;
		cout << "Введите элемент\n";
		cin >> str;
		if (b)
		{
			b=false;
			head = ft_create_element();
			head->data = str;
			current = head;
			continue;
		}
		tmp = ft_create_element();
		current->next = tmp;
		tmp->data = str;
		current = tmp;
	}
	return(head);
}

void	ft_push_back(my_list*	head, my_list*	element)
{
	my_list*	tmp;

	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = element;
}

void	ft_sort_list(my_list*	head, my_list*	f, my_list*	s)
{
	int	i;
	my_list*	tmp;
	my_list*	current;

	i = 0;
	tmp = head;
	while (tmp != NULL)
	{
		if (i % 2 == 0)
		{
			current = ft_create_element();
			current->data = tmp->data;
			ft_push_back(f,current);
		}
		else
		{
			current = ft_create_element();
			current->data = tmp->data;
			ft_push_back(s,current);
		}
		tmp = tmp->next;
		i++;
	}
}

void ft_print_list(my_list*	head)
{
	my_list* tmp;

	tmp = head;
	if (!head)
	{
		cout << "нет элементов";
		return ;
	}
	while(tmp != NULL)
	{
		cout << tmp->data;
		cout <<",";
		tmp = tmp->next;
	}
	cout <<"\n";
}

int	main()
{
	my_list*	head;
	my_list*	f;
	my_list*	s;

	f = ft_create_element();
	s = ft_create_element();
	head = ft_create_list();
	ft_sort_list(head, f, s);
	f = f->next;
	s = s->next;
	cout << "first = ";
	ft_print_list(f);
	cout << "second = ";
	ft_print_list(s);
	return (0);
}