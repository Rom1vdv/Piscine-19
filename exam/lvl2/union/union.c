/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romvan-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:49:49 by romvan-d          #+#    #+#             */
/*   Updated: 2021/12/02 15:16:25 by romvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_double(char *str, char c, int i)
{	
	i--;
	while (i >= 0)
	{
		if (c == str[i])
			return (0);
		i--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while(argv[1][i])
		{
			if(ft_is_double(argv[1],argv[1][i], i) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
		while (argv[2][j])
		{
			if (ft_is_double(argv[1], argv[2][j], i) == 1)
			{
				if (ft_is_double(argv[2], argv[2][j], j) == 1)
					write (1, &argv[2][j], 1);
			}
			j++;
		}
	}
	write (1, "\n", 1);
}
