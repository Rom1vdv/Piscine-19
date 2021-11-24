/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:01:15 by romvan-d          #+#    #+#             */
/*   Updated: 2021/11/19 17:09:38 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char x)
{
	write(1, &x, 1);
	return (0);
}

void	add_coma_and_blank(char e, char f)
{
	write(1, &e, 1);
	write(1, &f, 1);
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putchar(48 + i / 10);
			ft_putchar(48 + i % 10);
			ft_putchar(' ');
			ft_putchar(48 + j / 10);
			ft_putchar(48 + j % 10);
			if (i != 98)
				add_coma_and_blank(',', ' ');
			j++;
		}
		i++;
	}
}
