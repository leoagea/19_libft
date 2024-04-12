/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:43:13 by lagea             #+#    #+#             */
/*   Updated: 2024/04/12 23:55:53 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_dst;

	i = 0;
	j = 0;
	len_dst = ft_strlen(dst);
	if (!src && !dst && dstsize == 0)
		return (0);
	while (dst[i])
		i++;
	while (src[j] && (i + j + 1) < (dstsize))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (j < dstsize)
		dst[i + j] = '\0';
	if (dstsize <= len_dst)
		return (ft_strlen(src) + dstsize);
	else
		return (ft_strlen(src) + len_dst);
}

// int main()
// {
// 	char* s = "";
// 	char d[10];

// 	ft_strlcat
// }