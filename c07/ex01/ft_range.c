/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:29:48 by romvan-d          #+#    #+#             */
/*   Updated: 2021/12/01 14:27:43 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*values;
	int	i;

	if (min >= max)
		return (NULL);
	values = (int *)malloc(sizeof(int) * (max - min));
	if (!values)
		return (NULL);
	i = 0;
	while (min < max)
	{
		values[i] = min;
		min++;
		i++;
	}
	return (values);
}
