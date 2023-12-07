/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestevao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 05:30:50 by mestevao          #+#    #+#             */
/*   Updated: 2023/12/04 05:31:06 by mestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cur;
	int	cur2;

	if (argc < 2)
		return (0);
	cur = argc - 1;
	while (cur >= 1)
	{
		cur2 = 0;
		while (argv[cur][cur2] != 0)
		{
			write(1, &argv[cur][cur2], 1);
			cur2++;
		}
		write(1, "\n", 1);
		cur--;
	}
}
