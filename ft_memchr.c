/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 21:45:42 by lagea             #+#    #+#             */
/*   Updated: 2024/04/10 23:12:01 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	u_c;

	u_c = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == u_c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}
