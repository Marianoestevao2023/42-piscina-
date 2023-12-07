/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestevao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:51:03 by mestevao          #+#    #+#             */
/*   Updated: 2023/11/29 22:04:25 by mestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = -1;
	while (++i < size && *dest)
		dest++;
	if (i == size)
		return (i + (unsigned int)ft_strlen(src));
	j = -1;
	while (src[++j])
		if (j < size - i - 1)
			*dest++ = src[j];
	*dest = '\0';
	return (i + j);
}
