/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:03:46 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 15:03:42 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + len);
	while (len > 0)
	{
		len--;
		if (s[len] == (char)c)
			return ((char *)s + len);
	}
	return (NULL);
}

// int main()
// {
// 	char *s  = "amine kaddouri";
// 	char c = 'l';
// 	char *res  = strrchr(s, c);
// 	printf("%s\n", res);
// 	return (0);
// }
