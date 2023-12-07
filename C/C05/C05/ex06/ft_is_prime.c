/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestevao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 07:39:31 by mestevao          #+#    #+#             */
/*   Updated: 2023/12/02 07:39:50 by mestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	prime_helper(int div, int nb)
{
	if (nb < 2 || (nb % div == 0 && nb != div))
		return (0);
	else if (nb == div || nb == 2147483647)
		return (1);
	else
		return (prime_helper(div + 1, nb));
}

int	ft_is_prime(int nb)
{
	return (prime_helper(2, nb));
}
