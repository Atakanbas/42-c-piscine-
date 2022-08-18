/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:16:27 by abastosu          #+#    #+#             */
/*   Updated: 2022/08/07 17:26:11 by abastosu         ###   ########.fr       */
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

	i = 0;
	if (ac > 0)
	{
		while (av[0][i])
		{
			print(av[0][i]);
			i++;
		}
	}
}
