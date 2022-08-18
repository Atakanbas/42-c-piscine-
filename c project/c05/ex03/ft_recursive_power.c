/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 11:31:45 by abastosu          #+#    #+#             */
/*   Updated: 2022/08/07 17:01:57 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (power >= 1)
	{
		return (nbr * ft_recursive_power(nbr, (power - 1)));
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
