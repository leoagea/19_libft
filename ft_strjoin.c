/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:00:30 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 15:12:42 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int index;
    char *new_s;
    const int len_s1 = ft_strlen(s1);
    const int len_s2 = ft_strlen(s2);

    index = 0;
    new_s = (char *) malloc ((len_s1 + len_s2 + 1) * sizeof(char));
    if (!new_s)
        return NULL;
    while (*s1)
    {
        new_s [index] = *s1;
        index++;
        s1++;
    }
    while (*s2)
    {
        new_s [index] = *s2;
        index++;
        s2++;
    }
    new_s [index] = '\0';
    return new_s;
}