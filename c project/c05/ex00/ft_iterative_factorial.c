/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:16:49 by abastosu          #+#    #+#             */
/*   Updated: 2022/08/07 16:49:15 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	f = 1;
	i = 1;
	if (nb > 1)
	{
		while (i <= nb)
		{
			f *= i;
			i++;
		}
		return (f);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
