/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 13:58:58 by abastosu          #+#    #+#             */
/*   Updated: 2022/08/07 14:16:28 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
	{
		return (0);
	}
	while (n <= nb / 2)
	{
		if (nb % n == 0)
		{
			return (0);
		}
		n++;
	}
	return (1);
}
