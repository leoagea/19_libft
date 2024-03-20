/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:26:11 by lagea             #+#    #+#             */
/*   Updated: 2024/03/20 17:57:05 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LIBFT_H
#ifdef LIBFT_H

#include <stdio.h>
#include <stddef.h>

int ft_isalpha (int c);
int ft_isdigit (char c);
int	ft_isascii(char c);
int	ft_isalnum(char c);
int	ft_isprint(char c);
int	ft_tolower(int c);
int	ft_toupper(int c);
void	ft_bzero(void *str, size_t n);
void	*memset(void *str, int c, size_t n);
void    *memmove(void *dst, const void *src, size_t len);


size_t	ft_strlen(const char *s);

#endif LIBFT_H