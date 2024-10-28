/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:08:42 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/28 15:15:10 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
// int main() {
//     char dst[20];
//     const char *src = "Hello, World!";
//     size_t result;

//     // // Test 1: Normal case where dstsize is sufficient
//     // result = ft_strlcpy(dst, src, sizeof(dst));
//     // printf("Test 1 - Normal case:\n");
//     // printf("Copied string: %s\n", dst);
//     // printf("Return value: %zu\n", result);
//     // printf("Expected return value: %zu\n\n", ft_strlen(src));

//     // // Test 2: dstsize is smaller than the length of the source string
//     // result = ft_strlcpy(dst, src, 5);
//     // printf("Test 2 - Truncated case:\n");
//     // printf("Copied string: %s\n", dst);
//     // printf("Return value: %zu\n", result);
//     // printf("Expected return value: %zu\n\n", ft_strlen(src));

// 	    // Test 3: dstsize is 0
//     result = ft_strlcpy(dst, src, 0);
//     printf("Test 3 - Zero dstsize:\n");
//     printf("Copied string: %s\n", dst);  // dst should remain unchanged
//     printf("Return value: %zu\n", result);
//     printf("Expected return value: %zu\n\n", ft_strlen(src));
//     // // Test 4: Null pointers
//     // result = ft_strlcpy(NULL, NULL, 10);
//     // printf("Test 4 - NULL pointers:\n");
//     // printf("Return value: %zu\n", result);
//     // printf("Expected return value: 0\n\n");

// //     // Test 5: src is empty
// //     result = ft_strlcpy(dst, "", sizeof(dst));
// //     printf("Test 5 - Empty source:\n");
// //     printf("Copied string: %s\n", dst);
// //     printf("Return value: %zu\n", result);
// //     printf("Expected return value: %zu\n\n", ft_strlen(""));

// return 0;
// }
