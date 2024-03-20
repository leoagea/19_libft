/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:26:11 by lagea             #+#    #+#             */
/*   Updated: 2024/03/20 02:44:12 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LIBFT_H
#ifdef LIBFT_H

#include <stddef.h>

int ft_isalpha (int c);
int ft_isdigit (char c);
int	ft_isascii(char c);
int	ft_isalnum(char c);
int	ft_isprint(char c);
int	ft_tolower(int c);
int	ft_toupper(int c);

size_t	ft_strlen(const char *s);

#endif LIBFT_H