/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:41:11 by romvan-d          #+#    #+#             */
/*   Updated: 2021/11/24 16:12:26 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}	

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (src[i] && j < size - 1)
	{
		dest [j + i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(src) + ft_strlen(dest));
}

#include <stdio.h>

int main(void)
{
	char src[] = "World";
	char dest[] = "Hello";
	printf("%d\n", ft_strlcat(dest, src, 6));
}

