/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:34:11 by lagea             #+#    #+#             */
/*   Updated: 2024/03/21 21:47:05 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *nbr;

    nbr = ft_itoa(n);
    ft_putstr_fd(nbr, fd);
}

int main (void)
{
    int fichier;

    fichier = open("test.txt", O_RDWR);
    ft_putnbr_fd(-155,fichier);
    close(fichier);
}