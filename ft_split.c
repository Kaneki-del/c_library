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


static int	cownt_words(char *str, char c)// count the strings
{
	int	i;
	int	count;

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
//
int main()
{
	char *ptr = "ahsdfdadfhdfkahfdjf";
	char a = 'a';
	int i = cownt_words(ptr, a);
	printf("%d", i);
}
