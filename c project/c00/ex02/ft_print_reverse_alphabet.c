/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 10:26:43 by abastosu          #+#    #+#             */
/*   Updated: 2022/07/24 10:36:36 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	basla;
	char	bitis;

	basla = 'z';
	bitis = 'a';
	while (basla >= bitis)
	{
		write(1, &basla, 1);
		basla--;
	}
}
