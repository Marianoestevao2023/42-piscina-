/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestevao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:21:45 by mestevao          #+#    #+#             */
/*   Updated: 2023/12/03 13:31:27 by mestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cur;

	if (nb <= 1)
		return (0);
	if (nb == 2147483647)
		return (1);
	cur = 1;
	while (cur <= nb)
	{
		if (nb % cur == 0)
			if (cur != 1 && cur != nb)
				return (0);
		cur++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
