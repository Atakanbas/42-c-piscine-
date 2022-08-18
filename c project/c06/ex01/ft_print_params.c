/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:28:18 by abastosu          #+#    #+#             */
/*   Updated: 2022/08/08 12:31:35 by abastosu         ###   ########.fr       */
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
	int	j;

	i = 0;
	j = 1;
	while (j < ac)
	{
		while (av[j][i])
		{
			print(av[j][i]);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
	return (0);
}
