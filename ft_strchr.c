/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:56:37 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 15:03:46 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (NULL);
}

// int  main()
// {
// 	char *s = "amine kaddouri";
// 	char c = 'k';
// 	char *res = ft_strchr(s, c);
// 	printf("%s\n", res);
// 	return (0);
// }
