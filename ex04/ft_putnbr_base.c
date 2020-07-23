/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 18:41:35 by soilee            #+#    #+#             */
/*   Updated: 2020/07/23 20:24:20 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_len(char *base)
{
	int i;

	i = 0;
	while (*(base + i) != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	base = ft_str_len(base);
}
