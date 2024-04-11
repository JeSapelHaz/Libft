/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 18:44:08 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/11 18:45:32 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long int nbr;
    unsigned char c;

    nbr = n;
    if (nbr < 0)
    {
        nbr = -nbr;
        write(fd, "-", 1);
    }
    if (nbr >= 10)
        ft_putnbr_fd(nbr / 10, fd);
    c = (nbr % 10) + '0';
    write(fd,&c, 1);
}