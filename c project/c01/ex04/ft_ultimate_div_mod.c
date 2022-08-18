/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:08:05 by abastosu          #+#    #+#             */
/*   Updated: 2022/07/27 17:27:34 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	if (b != 0)
	{
		temp = *a % *b;
		*a = *a / *b;
		*b = temp;
	}
}
