/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestevao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:47:16 by mestevao          #+#    #+#             */
/*   Updated: 2023/12/03 16:47:21 by mestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	cur;

	(void) argc;
	cur = 0;
	while (argv[0][cur] != 0)
	{
		write(1, &argv[0][cur], 1);
		cur++;
	}
	write(1, "\n", 1);
	return (0);
}
