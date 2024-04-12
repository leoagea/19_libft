/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:00:30 by lagea             #+#    #+#             */
/*   Updated: 2024/04/12 23:58:18 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static char *check_string_get_len(char const *s1, const char *s2,
	int *s1_len,int *s2_len)
// {
// 	*s1_len = ft_strlen9
// }

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			index;
	char		*new_s;
	const int	len_s1 = ft_strlen(s1);
	const int	len_s2 = ft_strlen(s2);

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	new_s = (char *)malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!new_s)
		return (NULL);
	while (*s1)
	{
		new_s[index] = *s1;
		index++;
		s1++;
	}
	while (*s2)
	{
		new_s[index] = *s2;
		index++;
		s2++;
	}
	new_s[index] = '\0';
	return (new_s);
}
