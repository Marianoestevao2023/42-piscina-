/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mestevao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 12:43:57 by mestevao          #+#    #+#             */
/*   Updated: 2023/11/30 12:44:04 by mestevao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < -0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int main()
{
    printf("%d\n", ft_iterative_power(2, 3)); // Deve imprimir 8
    printf("%d\n", ft_iterative_power(5, 0)); // Deve imprimir 1
    printf("%d\n", ft_iterative_power(0, 5)); // Deve imprimir 0
    printf("%d\n", ft_iterative_power(2, -2)); // Deve imprimir 0

    return 0;
}*/
