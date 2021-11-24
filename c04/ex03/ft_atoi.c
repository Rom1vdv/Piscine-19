/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 09:31:43 by romvan-d          #+#    #+#             */
/*   Updated: 2021/11/23 16:00:32 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_blank_space(char *str, int i)
{
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_is_negative(char *str, int i, int *neg)
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
	int			neg;
	long int	nb;
	int			i;

	i = 0;
	neg = 0;
	nb = 0;
	if (!str)
		return (0);
	i = ft_is_blank_space(str, i);
	i = ft_is_negative(str, i, &neg);
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		nb = nb * 10;
		nb = nb + (str[i] - 48);
		i++;
	}
	if (neg == 1)
		nb = nb * -1;
	return ((int)nb);
}
