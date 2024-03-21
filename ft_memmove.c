/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:42:10 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 01:05:53 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dst && !src)
		return (NULL);
	/// explication overlaping https://www.reddit.com/r/C_Programming/comments/131ol7r/how_does_memmove_allow_the_copying_to_be_done_in/
	/// comprendre cette partie
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
}
