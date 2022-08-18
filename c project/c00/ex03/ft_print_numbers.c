/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:43:28 by abastosu          #+#    #+#             */
/*   Updated: 2022/07/24 11:13:11 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	ilk;
	char	son;

	ilk = '0';
	son = '9';
	while (ilk <= son)
	{
		write(1, &ilk, 1);
		ilk++;
	}
}
