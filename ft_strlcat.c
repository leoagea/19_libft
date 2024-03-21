/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 23:43:13 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 01:06:46 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!dst || !src)
        return 0;
    while (dst [i])
        i++;
    while (src [i])
    {
        dst [i] = src [j];
        i++;
        j++;
    }
    if (j < dstsize)
		dst[i] = '\0';
    return (ft_strlen(src) + ft_strlen(dst));
}
