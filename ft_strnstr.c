/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:22:16 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 17:22:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  needle_lent;

    i = 0;
    needle_lent = ft_strlen(needle);
    if (needle_lent == 0)
        return ((char *)haystack);
    while (i < len && haystack[i])
    {
        if (haystack[i] == needle[0])
        {
            if (i + needle_lent <= len)
            {
                j = 0;
                while (j < len && haystack[i + j] == needle[j])
                    j++;   
                if (j == needle_lent)
                    return ((char *)(haystack + 1));
            }
        }
            i++;
    }
    return (NULL);
}
#include <stdio.h>
#include <string.h>
int main()
{
    char *p1 = "ahhmed";
    char *p2 = "med";
    printf("%d", ft_strnstr(p1, p2, ft_strlen(p1)));
    printf("%d", strnstr(p1, p2, ft_strlen(p1)));
    return 0;
}