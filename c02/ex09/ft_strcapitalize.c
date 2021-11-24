/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:33:46 by romvan-d          #+#    #+#             */
/*   Updated: 2021/11/22 16:13:53 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_putlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (str);
	ft_putlowercase(str);
	while (str[i] != '\0')
	{
		if ((str[i - 1] >= 0 && str[i - 1] < 48)
			|| (str[i - 1] > 57 && str[i - 1] < 65)
			|| (str [i -1] > 90 && str[i - 1] < 97)
			|| (str[i - 1] > 122 && str[i - 1] < 127))
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
