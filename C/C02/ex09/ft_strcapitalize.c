/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestevao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:28:09 by mestevao          #+#    #+#             */
/*   Updated: 2023/11/27 15:28:30 by mestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_between(char start, char end, char character)
{
	return (character >= start && character <= end);
}

int	is_alphanum(char character)
{
	return (is_between('a', 'z', character) || is_between('A', 'Z', character)
		|| is_between('0', '9', character));
}

char	*ft_strcapitalize(char *str)
{
	char	*cursor;

	cursor = str;
	while (*cursor != '\0')
	{
		if (is_alphanum(*cursor))
		{
			if (is_between('a', 'z', *cursor))
				*cursor = *cursor - 'a' + 'A';
			cursor++;
			while (is_alphanum(*cursor))
			{
				if (is_between('A', 'Z', *cursor))
					*cursor = *cursor - 'A' + 'a';
				cursor++;
			}
		}
		cursor++;
	}
	return (str);
}
