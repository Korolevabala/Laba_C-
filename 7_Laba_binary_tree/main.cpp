#include <iostream>

using namespace std;

struct t_tree
{
	string	s;
	t_tree*	left;
	t_tree*	right;
};

t_tree*	ft_create_elem()
{
	t_tree*	elem;

	elem = new t_tree();
	return (elem);
}

int	ft_leng(string	s1)
{
	int	i;

	i = 0;
	while (s1[i] != 0)
		i++;
	return (i);
}

t_tree*	ft_create_tree()
{
	t_tree*	head;
	t_tree* left;
	t_tree* right;
	t_tree* parrent;
	int		sum_words;
	string 	s;

	cout << "Введите количество слов\n";
	cin >> sum_words;
	head = NULL;
	while(sum_words > 0)
	{
		cout << "Введите слово\n";
		cin >> s;
		sum_words--;
		if (head == NULL)
		{
			head = ft_create_elem();
			head->s = s;
			parrent = head;
			continue;
		}
		while (true)
		{
			if (ft_leng(s) < ft_leng(parrent->s))
			{
				if (parrent->left == NULL)
				{
					left = ft_create_elem();
					left->s = s;
					parrent->left = left;
					parrent = head;
					break;
				}
				else
				{
					parrent = parrent->left;
					continue;
				}
			}
			else
			{
				if (parrent->right == NULL)
				{
					right = ft_create_elem();
					right->s = s;
					parrent->right = right;
					parrent = head;
					break;
				}
				else
				{
					parrent = right;
					continue;
				}
			}
		}
	}
	return (head);
}

t_tree*	ft_del_more_long_word(t_tree*	head)
{
	t_tree* current;
	t_tree*	tmp;

	current = head;
	while (current->right != NULL)
	{
		tmp = current;
		current = current->right;
	}
	if (current == head)
		head = head->left;
	else
	{
		tmp->right = NULL;
		delete current;
	}
	return (head);
}

void	ft_prefix_print(t_tree*	current)
{
	if (!current)
		return ;
	cout << current->s <<", ";
	ft_prefix_print(current->left);
	ft_prefix_print(current->right);
}
int	main()
{
	t_tree* head;

	head = ft_create_tree();
	cout << "до убирания элемента:\n";
	ft_prefix_print(head);
	head = ft_del_more_long_word(head);
	cout << "\nпосле:\n";
	ft_prefix_print(head);
	return (0);
	// cout << ft_comp("aab", "aaa");
}