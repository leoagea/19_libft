/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:25:36 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 21:41:11 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// TODO : gerer les nombres negatifs

char	*ft_itoa(int n)
{
	size_t	len_nbr;
	size_t	buf;
	char	*nbr;

	buf = n;
	len_nbr = 1;
	while (buf > 10)
	{
		buf /= 10;
		len_nbr++;
	}
	nbr = (char *)malloc((len_nbr + 1) * sizeof(char));
	nbr[len_nbr] = '\0';
	while (n > 10)
	{
		len_nbr--;
		nbr[len_nbr] = (n % 10) + 48;
		n /= 10;
	}
	nbr[0] = (n % 10) + 48;
	return (nbr);
}
