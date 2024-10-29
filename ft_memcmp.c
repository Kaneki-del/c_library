/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:12:29 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 16:12:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *ps1;
    unsigned char *ps2;

    ps1 = (unsigned char *)s1;
    ps2 = (unsigned char *)s2;
    while (n > 0)
    {
        if (*ps1 != *ps2)
            return (*ps1 - *ps2);
        n--;
        ps1++;
        ps2++;
    }
    return (0);
}