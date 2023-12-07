/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateia <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:15:28 by amateia           #+#    #+#             */
/*   Updated: 2023/11/26 15:15:38 by amateia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str);

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_for_consev_space(char *inp)
{
	int	i;

	i = 1;
	while (inp[i] != '\0')
	{
		if (inp[i - 1] == ' ' && inp[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

//A entrada contém apenas números ou espaços ou aspas
int	check_for_content(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '1' && str[i] <= '4') || str[i] == ' '))
			if (str[i] != '\"')
				return (0);
		i++;
	}
	return (1);
}

int	check_count_nums(char *input)
{
	int	nums;

	nums = 0;
	while (*input != '\0')
	{
		if (is_digit(*input))
		{
			if (!(*input >= '1' && *input <= '4'))
			{
				ft_putstr("Clues must be in range from 1 to 4!\n");
				return (0);
			}
			nums++;
		}
		input++;
	}
	return (nums == 16);
}

void	parse_and_put_to_array(int *arr, char *str_args)
{
	int	val;
	int	i;

	i = 0;
	while (*str_args != '\0')
	{
		if (is_digit(*str_args))
		{
			val = *str_args - '0';
			arr[i] = val;
			i++;
		}
		str_args++;
	}
}
