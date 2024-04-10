/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:42:10 by lagea             #+#    #+#             */
/*   Updated: 2024/04/10 22:37:56 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	explication overlaping https://www.reddit.com/r/C_Programming/comments/131ol7r/how_does_memmove_allow_the_copying_to_be_done_in/
	comprendre cette partie
	if (src < dst && src + len >= dst)
	{
		while (++i < len)
			((unsigned char *)dst)[len - i] = ((unsigned char *)src)[len - i];
	}
	else
	{
		i = -1;
		while (++i < len)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}*/

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t    i;

    if (dst == src || len == 0)
        return (dst);

    // Check for overlap by comparing addresses directly
    if (dst > src && (const unsigned char *)dst < ((const unsigned char *)src + len))
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
