/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 22:23:49 by lagea             #+#    #+#             */
/*   Updated: 2024/03/22 00:15:01 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (c == set[index])
			return (0);
		index++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s;
	size_t	index;
	size_t	len_str;
	size_t	index_start;
	size_t	index_end;

	index_start = 0;
	index_end = ft_strlen(s1) - 1;
	while (!is_set(s1[index_start], set))
		index_start++;
	while (!is_set(s1[index_end], set))
		index_end--;
	len_str = (index_end - index_start) + 2;
	new_s = (char *)malloc((len_str) * sizeof(char));
	if (!new_s)
		return (NULL);
	index = 0;
	while (index_start <= index_end)
	{
		new_s[index] = s1[index_start];
		index++;
		index_start++;
	}
	new_s[len_str - 1] = '\0';
	return (new_s);
}
