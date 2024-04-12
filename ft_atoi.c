/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:17 by lagea             #+#    #+#             */
/*   Updated: 2024/04/12 23:40:26 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

// int	ft_atoi(const char *str)
// {
// 	int	i;
// 	int	res;
// 	int	sign;
// 	int overflow;

// 	i = 0;
// 	res = 0;
// 	sign = 1;
// 	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
// 		i++;
// 	if (str[i] == '-')
// 	{
// 		sign = -1;
// 		i++;
// 	}
// 	else if (str[i] == '+')
// 		i++;
// 	while (ft_isdigit((int)str[i]))
// 	{
// 		res += (str[i] - 48);
// 		i++;
// 		if (!(ft_isdigit((int)str[i])))
// 			return (res * sign);
// 		res *= 10;
// 	}
// 	return (res * sign);
// }

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
		// printf("%lld ",overflow);
		if (overflow * 10 > INT_MAX)
			return (-1);
		else if (overflow / 10< INT_MIN)
			return 0;
	}
	return ((int)res * sign);
}

int	main(void)
{
	// char *s = "1221274aa9999999999999999999999aaaaa99999999999999999999999999999999999999999999999999999999999";
	// char *long_long = "9223372036854775807";
	// char *max_int = "2147483647";

	char *test = "-92233720368547758073232323";
	printf("ft_atoi :%d\n", ft_atoi(test));
	printf("atoi :%d\n", atoi(test));
	return (0);
}