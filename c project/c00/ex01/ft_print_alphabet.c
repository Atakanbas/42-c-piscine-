/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:10:46 by abastosu          #+#    #+#             */
/*   Updated: 2022/07/24 10:26:03 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	ilkharf;
	char	sonharf;

	sonharf = 'z';
	ilkharf = 'a';
	while (ilkharf <= sonharf)
	{
		write(1, &ilkharf, 1);
		ilkharf++;
	}
}
