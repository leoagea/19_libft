/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:42:10 by lagea             #+#    #+#             */
/*   Updated: 2024/04/11 15:38:43 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

    i = 0;
	if (dst == src || len == 0)
		return (dst);
	// Check for overlap by comparing addresses directly
	if (dst > src && (const unsigned char *)dst < ((const unsigned char *)src
			+ len))
	{
		// Overlapping, copy from end to beginning
		// Ensure that we do not read past the source buffer
		while (len--)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else
	{
		// No overlap, or source is after destination, do normal copy
		for (i = 0; i < len; i++)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
