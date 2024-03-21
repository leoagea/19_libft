/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:26:11 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 19:49:39 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define LIBFT_H
#ifdef LIBFT_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/*Libc functions*/
int ft_isalpha (int c);
int ft_isdigit (int c);
int	ft_isascii(int c);
int	ft_isalnum(int c);
int	ft_isprint(int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *str);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);

char    *ft_strdup(const char *s1);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);

void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *str, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);


size_t	ft_strlen(const char *s);
size_t  ft_strlcat(char * dst, const char * src, size_t dstsize);
size_t  ft_strlcpy(char * dst, const char * src, size_t dstsize);

/*fonctions additionnelles*/
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_substr(char const *s, unsigned int start,size_t len);

#endif 