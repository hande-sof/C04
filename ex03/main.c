/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soilee <soilee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/23 17:27:26 by soilee            #+#    #+#             */
/*   Updated: 2020/07/23 17:36:16 by soilee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("10"));
	printf("%d\n", ft_atoi("123"));
	printf("%d\n", ft_atoi("1234"));
	printf("%d\n", ft_atoi("1234567890"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", ft_atoi("-10"));
	printf("%d\n", ft_atoi("-1234"));
	printf("%d\n", ft_atoi("-1234567890"));
	printf("%d\n", ft_atoi("  \t \r ---123tt"));
	printf("%d\n", ft_atoi("  \t \r ---456tt7"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("- + -+ - + 2-1 b"));
	return (0);
}
