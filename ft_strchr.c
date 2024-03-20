/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:01:58 by lagea             #+#    #+#             */
/*   Updated: 2024/03/20 18:23:45 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int			i;
	char		a;
    char        *ptr;
	const int	len = ft_strlen(str);

	i = 0;
    ptr = str;
	a = (char)c;
	while (i <= len)
	{
		if (str[i] == a)
			return (ptr = &str[i]);
		i++;
	}
	return (NULL);
}
