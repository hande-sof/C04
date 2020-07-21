/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 20:18:02 by soilee            #+#    #+#             */
/*   Updated: 2020/07/21 21:15:08 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	divide_num(int n)
{
	char c;

	c = n % 10 + '0';
	if (n >= 10)
		divide_num(n / 10);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		write(1, "-", 1);
		c = nb % 10 * (-1) + '0';
		nb /= -10;
		if (nb >= 10)
			divide_num(nb);
		else if (nb > 0 && nb < 10)
			ft_putnbr(nb);
		write(1, &c, 1);
	}
	else
		divide_num(nb);
}
