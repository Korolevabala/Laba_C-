#include <iostream>

using namespace std;

struct my_stack
{
    string 		data;
    my_stack*	next;
};

my_stack*	ft_create_element()
{
    my_stack*	element;

	element = new my_stack();
	element->next = NULL;
	return(element);
}

my_stack*	ft_create_stack()
{
	int	i;
	string	str;
	my_stack*	head;
	my_stack*	current;

	cout << "Введите кол-во элементов\n";
	cin >> i;
	head = NULL;
	while (i > 0)
	{
		i--;
		cout << "Введите элемент\n";
		cin >> str;
        current = ft_create_element();
        current->data = str;
        current->next = head;
        head = current;
	}
	return(head);
}

void	ft_add_stack(my_stack**	head, my_stack*	element)
{
	my_stack*	current;

 	current = ft_create_element();
	current->data = element->data;
	current->next = *head;
	*head = current;
    // return head;
}
int	ft_stack_size(my_stack*	head)
{
	my_stack*	tmp;
	int	i;

	i = 0;
	tmp = head;
	while(head != NULL)
	{
		i++;
		head = head->next;
	}
	head = tmp;
	return (i);
}
my_stack*	ft_get_stack_number(my_stack*	head, int	i)
{
	my_stack*	tmp;

	tmp  = head;
	while (i > 1)
	{
		i--;
		tmp = tmp->next;
	}
	return(tmp);
}

void	ft_new_stack(my_stack*	head, my_stack**	instance)
{
	my_stack*	current;
	int	len;
	int i;

	i = 3;
	while (i > 0)
	{
		i--;
		len = ft_stack_size(head);
		while(len > 0)
		{
		
			current = ft_get_stack_number(head, len);
			ft_add_stack(instance, current);
			len --;
		}
	}
}

void ft_print_stack(my_stack*	head)
{
	my_stack* tmp;

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

int	main(void)
{
	my_stack*	head;
	my_stack*	solve;

    head = ft_create_stack();
	solve = NULL;
	ft_new_stack(head, &solve);
	cout << "new stack = ";
    ft_print_stack(solve);
	return (0);
}