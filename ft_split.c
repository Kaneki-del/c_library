/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:04:35 by sait-nac          #+#    #+#             */
//*   Updated: 2024/10/30 23:18:09 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int    word_lent(const char *w, char c)
{
    size_t    i;

    i = 0;
    while (w[i] && (w[i] != c))
        i++;
    return (i);
}
static int    cownt_words(const char *str, char c)
{
    int    i;
    size_t    count;

    i = 0;
    count = 0;
    while (str[i])
    {
        while ((str[i] == c) && str[i])
            i++;
        if (str[i] != '\0')
            count++;
        while ((str[i] != c) && str[i])
            i++;
    }
    return (count);
}
static char    *append(const char *str, char c)
{
    size_t    lent;
    int i;
    char    *ptr;

    i = 0;
    lent = word_lent(str, c);
    ptr = (char *)malloc(sizeof(char) * (lent + 1));
    while (i < lent)
    {
        ptr[i] = str[i];
        i++;
    }
    ptr[i] = '\0';
    return ptr;
}

char    **ft_split(const char *s, char c)
{
    char    **str;
    int        i;

    i = 0;

    str = (char **)malloc(sizeof(char *) * (cownt_words(s, c) + 1));
    while (*s != '\0')
    {
        while (*s && (*s == c))
            s++;
        if (*s != '\0')
        {
            str[i] = append(s, c);
            i++;
        }
        while (*s && (*s != c))
            s++;
    }
    str[i] = 0;
    return str;
}