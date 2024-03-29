/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:11:57 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 21:32:42 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    size_t lenght;

    lenght = 0;
    while (s [lenght])
        lenght++;
    write(fd, s, lenght);
    write(fd,"\n", 1);
}
/*
int main (void)
{
    int fichier;

    fichier = open("test.txt", O_RDWR);
    printf("%d\n",fichier);
    ft_putendl_fd("Test de ft_putstr_fd.",fichier);
    close(fichier);
}*/
