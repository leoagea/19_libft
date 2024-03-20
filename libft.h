/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:26:11 by lagea             #+#    #+#             */
/*   Updated: 2024/03/20 19:06:04 by lagea            ###   ########.fr       */
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
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	ft_bzero(void *str, size_t n);
void	*memset(void *str, int c, size_t n);
void    *memmove(void *dst, const void *src, size_t len);


size_t	ft_strlen(const char *s);

#endif LIBFT_H