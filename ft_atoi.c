/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 19:07:17 by lagea             #+#    #+#             */
/*   Updated: 2024/04/12 17:20:43 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	without_whitespace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		i++;
	else if (str[i] == '+')
		i++;
	else
		return (i);
}

static int	check_sign(char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	return (sign);
}
static int	check_overflow(char *str)
{
	int	i;
	int	count;
	int	sign;

	sign = check_sign(str);
	count = 0;
	i = without_whitespace(str);
	while (count < 10)
	{
		if (ft_isdigit((int)str[i]))
		{
			i++;
			count++;
		}
		else
			return (0);
	}
	if (ft_strlen(str + i) >)
}

int	ft_atoi(const char *str)
{
	int	i;
	int	res;
	int	sign;
	int overflow;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit((int)str[i]))
	{
		res += (str[i] - 48);
		i++;
		overflow = res * res;
		printf("overflow : %d\n",overflow);
		if (overflow / res != res && sign == 1)
			return -1;
		else if (overflow / res != res && sign == -1)
			return 0;
		if (!(ft_isdigit((int)str[i])))
			return (res * sign);
		res *= 10;
	}
	return (res * sign);
}
int	main(void)
{
	// char *s = "1221274aa9999999999999999999999aaaaa99999999999999999999999999999999999999999999999999999999999";
	char *long_long = "9223372036854775807";
	char *max_int = "2147483647";
	char *test = "-9223372036854775805";
	printf("%d\n", ft_atoi(test));
	printf("%d\n", atoi(test));
	return (0);
}