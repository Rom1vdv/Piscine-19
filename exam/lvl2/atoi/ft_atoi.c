/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:02:13 by romvan-d          #+#    #+#             */
/*   Updated: 2021/11/25 18:48:16 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char *str, int i)

{
	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_is_sign(char *str, int i, int *neg)
{
	int	count;

	count = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;	
	}
	if (count % 2 == 1)
		*neg = 1;
	return (i);
}


int	ft_atoi(char *str)
{
	int			i;
	int			neg;
	long int	nb;

	i = 0 ;
	neg = 0;
	nb = 0;
	i = ft_isspace(str, i);
	i = ft_is_sign(str, i, &neg);
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + str[i] - 48;
		i++;
	}
	if (neg == 1)
		nb = -nb;
	return ((int)nb);
}

#include <stdio.h>

int main(void)
{
	char c[] = "+--q+-1234";
	printf("%d\n", ft_atoi(c));
}
