/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soufiane <soufiane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:54:27 by soufiane          #+#    #+#             */
/*   Updated: 2024/10/31 15:29:34 by soufiane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int lent(long n)
{
    size_t    count;
    
    count = 0;
    if (n < 0)
    {
        n = n * -1;
        count++;
    }
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return(count);    
}
char    *ft_itoa(int n)
{
    long    b;
    int        i;
    char    *str;

    b = n;
    i = lent(b);
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (str == NULL)
        return (NULL);
    str[i--] = '\0';
    if (b == 0)
    {
        str[i] = '0';
        return (str);
    }
    else if (n < 0)
    {
        str[0] = '-';
        b *= -1;
    }
    while (b > 0)
    {
        str[i--] = b % 10 + '0';
        b /= 10;
        
    }
    return (str);
}