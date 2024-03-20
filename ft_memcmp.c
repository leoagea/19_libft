/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:03:53 by lagea             #+#    #+#             */
/*   Updated: 2024/03/20 22:39:01 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(unsigned char *)(s1) == *(unsigned char *)(s2) && i < n)
    {
        s1++;
        s2++;
        i++;
    }
	if (i < n)
		return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
	return (0);
}
