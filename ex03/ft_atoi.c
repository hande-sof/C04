/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 21:21:47 by soilee            #+#    #+#             */
/*   Updated: 2020/07/23 21:34:31 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_num(char *str, int index)
{
	while (*(str + index) != '\0')
	{
		if (*(str + index) >= 48 && *(str + index) <= 57)
			return (index);
		index++;
	}
	return (0);
}

int	ft_is_odd(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 48 && *(str + i) <= 57)
			break ;
		if (*(str + i) == '-')
			count++;
		i++;
	}
	if (count == 1)
		return (-1);
	else if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	ft_atoi(char *str)
{
	int value;
	int index;
	int positive;

	value = 0;
	index = 0;
	index = ft_is_num(str, index);
	positive = ft_is_odd(str);
	while (*(str + index) != '\0' &&
			*(str + index) >= 48 && *(str + index) <= 57)
	{
		value = value * 10 + *(str + index) - '0';
		index++;
	}
	return (value * positive);
}
