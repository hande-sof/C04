/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:21:47 by soilee            #+#    #+#             */
/*   Updated: 2020/07/21 22:52:25 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_num(char *str)
{
}

int	ft_is_odd(char *str)
{
	int count;

	while (
}

int	ft_atoi(char *str)
{
	int value;
	int index;
	int positive;

	value = 0;
	index = ft_is_num(str);
	positive = ft_is_odd(str);
	while (*(str + index) != '\0')
	{
		value = value * 10 + *(str + index) - '0';
		if (*(str + index) < '0' && *(str + index) > '9')
			break;
		index++;
	}
	return (value * positive);
}
