/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abastosu <abastosu@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:29:38 by abastosu          #+#    #+#             */
/*   Updated: 2022/07/27 19:14:27 by abastosu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	yazdir(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		yazdir(*str);
		str++;
	}
}
