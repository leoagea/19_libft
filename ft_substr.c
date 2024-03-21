/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 00:10:01 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 01:12:56 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_s;

	i = 0;
    if (start >= ft_strlen(s))
        len = 0;
    else if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	new_s = (char *)malloc((len + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (s[start + i] && i < len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
