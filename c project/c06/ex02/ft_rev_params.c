/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 12:34:25 by abastosu          #+#    #+#             */
/*   Updated: 2022/08/08 14:37:56 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print(char a)
{
	write(1, &a, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	x;

	i = 0;
	x = ac - 1;
	while (x > 0)
	{
		while (av[x][i])
		{
			print(av[x][i]);
			i++;
		}
		write(1, "\n", 1);
		x--;
		i = 0;
	}
	return (0);
}
