/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestevao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 05:33:42 by mestevao          #+#    #+#             */
/*   Updated: 2023/12/04 05:33:54 by mestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cur;

	cur = 0;
	while (s1[cur] != 0 && s2[cur] != 0)
	{
		if (s1[cur] != s2[cur])
		{
			return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
		}
		cur++;
	}
	return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
}

void	ft_putstr(char *str)
{
	int	cur;

	cur = 0;
	while (str[cur] != 0)
	{
		write(1, &str[cur], 1);
		cur++;
	}
}

void	ft_swap_arg(char **argv, int cur, int cur2)
{
	char	*temp;

	temp = argv[cur];
	argv[cur] = argv[cur2];
	argv[cur2] = temp;
}

int	main(int argc, char **argv)
{
	int	cur;
	int	cur2;

	cur = 0;
	while (cur++, cur < argc)
	{
		cur2 = cur;
		while (cur2++, cur2 < argc)
			if (ft_strcmp(argv[cur], argv[cur2]) > 0)
				ft_swap_arg(argv, cur, cur2);
	}
	cur = 0;
	while (cur++, cur < argc)
	{
		ft_putstr(argv[cur]);
		write(1, "\n", 1);
	}
}
