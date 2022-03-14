/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 11:48:49 by romvan-d          #+#    #+#             */
/*   Updated: 2021/12/01 14:29:05 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_required_space(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	len = 0;
	while (sep[len])
		len++;
	len = len * size - 1;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	if (len <= 0)
		return (0);
	len++;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		index_sep;
	int		total;

	result = (char *)malloc(sizeof(char) * ft_required_space(size, strs, sep));
	if (size == 0)
		return (result);
	total = -1;
	i = -1;
	while (++i < size)
	{
		j = -1;
		index_sep = -1;
		while (strs[i][++j])
			result[++total] = strs[i][j];
		while (sep[++index_sep] && i < size - 1)
			result[++total] = sep[index_sep];
	}
	result[++total] = '\0';
	return (result);
}
