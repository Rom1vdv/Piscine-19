/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:42:25 by romvan-d          #+#    #+#             */
/*   Updated: 2021/12/01 19:03:21 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_charset(char *charset, char c)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_words(char *str, char *charset)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && ft_check_charset(charset, str[i]) == 1)
			i++;
		else
		{
			words++;
			while (str[i] && ft_check_charset(charset, str[i]) == 0)
				i++;
		}
	}
	return (words);
}

int	ft_strlen(char *charset, char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_check_charset(charset, str[i]) == 0)
		i++;
	return (i);
}

int	ft_copy(char *dest, char *str, char *charset, int i)
{
	int	j;

	j = 0;
	while (str[i] && ft_check_charset(charset, str[i]) != 1)
	{
		dest[j] = str[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (i);
}

char	**ft_split(char *str, char *charset)
{
	char	**matrice;
	int		words;
	int		i;

	words = ft_count_words(str, charset);
	matrice = (char **)malloc(sizeof(char *) * (words + 1));
	words = 0;
	i = 0;
	while (str[i])
	{
		if (ft_check_charset(charset, str[i]) == 1)
			i++;
		else
		{
			matrice[words] = (char *)malloc (sizeof (char)
					* ft_strlen(charset, &str[i]) + 1);
			i = ft_copy(matrice[words], str, charset, i);
			words++;
		}
	}
	matrice[words] = 0;
	return (matrice);
}
