/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 18:41:35 by soilee            #+#    #+#             */
/*   Updated: 2020/07/23 22:39:59 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	if (*(base + 0) == '\0' || *(base + 1) == '\0')
		return (0);
	while (*(base + i) != '\0')
	{
		if (*(base + i) == '+' || *(base + i) == '-')
			return (0);
		i++;
	}
	return (1);
}

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
	int base_n;

	base_n = ft_str_len(base);
	if (!ft_is_base(base))
		return ;
}
