/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 22:40:54 by lagea             #+#    #+#             */
/*   Updated: 2024/03/20 23:02:50 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (len == 0)
		return (NULL);
	if (*to_find == '\0')
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] && str[i + j])
			j++;
		if (j == ft_strlen(to_find))
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
