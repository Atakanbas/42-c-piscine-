/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:42:03 by abastosu          #+#    #+#             */
/*   Updated: 2022/08/08 18:48:39 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	 print(char a)
{
	write(1, &a, 1);
}

int	a_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char	*a, char	*b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}



int main(int ac, char **av)
{
	int i;
	int j;

	j = 0;
	i = 0;

	while (i < ac - 1)
	{
		while (j < ac -1)
		{
			if (a_strcmp(av[i][j], av[i + 1][j] > 0))
			{
				ft_swap(av[i], av[i + 1]);
			}
			j++;
		}
		j = 1;
		i++;
	}
	i = 0;
	j = 0;
	while (ac > 0)
	{
		while(av[j][i])
		{
			print(av[j][i]);
			i++;
		}
		j++;
		i = 0;
	}
	return (0);
}

	
		
