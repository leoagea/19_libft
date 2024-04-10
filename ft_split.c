/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:15:05 by lagea             #+#    #+#             */
/*   Updated: 2024/04/10 16:34:35 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	malloc_strings(char const *s, char c)
{
	int	index;
	int	nbr_words;

	index = 0;
	nbr_words = 0;
	while (s[index])
	{
		while (s[index] == c && s[index])
			index++;
		if (s[index] != '\0')
			nbr_words++;
		while (s[index] != c && s[index])
			index++;
	}
	return (nbr_words);
}

char	*malloc_len_word(char const *s, char c)
{
	char	*new;
	int		i;
	int		index;
	int		len_word;

	i = 0;
	index = 0;
	len_word = 0;
	while (s[index] != c && s[index])
	{
		index++;
		len_word++;
	}
	new = (char *)malloc((len_word + 1) * sizeof(char));
	if (!new)
		return NULL;
	while (i < len_word)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		index;
	int		nbr_words;
	char	**news_s;

	i = 0;
	index = 0;
	nbr_words = malloc_strings(s, c);
	news_s = (char **)malloc((nbr_words + 1) * sizeof(char *));
	if (!news_s)
		return NULL;
	while (s[index] && i < nbr_words)
	{
		while (s[index] == c && s[index])
			index++;
		if (s[index] != '\0')
		{
			news_s[i] = malloc_len_word(&s[index], c);
			i++;
		}
		while (s[index] != c && s[index])
			index++;
	}
	news_s[nbr_words] = NULL;
	return (news_s);
}
