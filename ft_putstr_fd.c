/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 19:55:48 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 20:10:21 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t length;

    length = 0;
    while (s [length])
        length++;
    write(fd, s, length);
}
/*
int main (void)
{
    int fichier;

    fichier = open("test.txt", O_RDWR);
    printf("%d\n",fichier);
    ft_putstr_fd("Test de ft_putstr_fd.",fichier);
    close(fichier);
}*/
