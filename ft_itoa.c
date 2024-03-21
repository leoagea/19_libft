/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:25:36 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 22:21:12 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// TODO : gerer les nombres negatifs
int	int_len(int n)
{
	size_t	len_nbr;

	len_nbr = 0;
	if (n < 0)
	{
		n = -n;
		len_nbr = 1;
	}
	else if (n == 0)
		len_nbr = 1;
	while (n != 0)
	{
		n /= 10;
		len_nbr++;
	}
	return (len_nbr);
}

char	*ft_itoa(int n)
{
	size_t	len_nbr;
	char	*nbr;

	len_nbr = int_len(n);
	nbr = (char *)malloc((len_nbr + 1) * sizeof(char));
	if (n < 0)
	{
		n = -n;
		nbr[0] = '-';
	}
	nbr[len_nbr] = '\0';
	while (n != 0)
	{
		len_nbr--;
		nbr[len_nbr] = (n % 10) + 48;
		n /= 10;
	}
	return (nbr);
}
