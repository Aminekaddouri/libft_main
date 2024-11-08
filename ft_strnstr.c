/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:27:50 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 15:03:33 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && (i < len))
	{
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char *hay = "hello my name is amine kaddouri";
// 	char *need = "my";
// 	size_t len = 0;
// 	char *res = ft_strnstr(hay, need, len);
// 	printf("%s\n", res);
// 	return (0);
// }
