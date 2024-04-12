/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:17 by lagea             #+#    #+#             */
/*   Updated: 2024/04/12 23:53:45 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_whitespace_and_sign(const char **str, int *sign)
{
	while ((**str >= 9 && **str <= 13) || **str == 32)
		(*str)++;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			*sign = -1;
		(*str)++;
	}
}

int	ft_atoi(const char *str)
{
	int	res;
	int		sign;
	long	overflow;

	res = 0;
	sign = 1;
	skip_whitespace_and_sign(&str, &sign);
	while (ft_isdigit(*str))
	{
		res *= 10;
		res += (*str - 48);
		str++;
		overflow = res;
		printf("%lld ",overflow);
		if (overflow * 10 > INT_MAX && sign == 1)
			return (-1);
		else if (overflow / 10< INT_MIN && sign == -1)
			return 0;
	}
	return ((int)res * sign);
}

int	main(void)
{
	// char *s = "1221274aa9999999999999999999999aaaaa99999999999999999999999999999999999999999999999999999999999";
	// char *long_long = "9223372036854775807";
	// char *max_int = "2147483647";

	char *test = "-9223372036854775807323232398796557";
	printf("ft_atoi :%d\n", ft_atoi(test));
	printf("atoi :%d\n", atoi(test));
	return (0);
}