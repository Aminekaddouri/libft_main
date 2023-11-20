/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:24:13 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 14:39:16 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	// char *s = "Youness Najimi";
// 	// printf("%s\n", ft_memchr(s, 'N', 10));
// 	int arr[] = {257, 487, 521};

// 	int search_value = 1;
// 	unsigned char *res = ft_memchr(arr, search_value, 6);
// 	int i = 0;
// 	while (i < 6)
// 	{
// 		printf("%d\n", res[i]);
// 		i++;
// 	}
// 	return (0);
// }

// int main()
// {
// 	// char *s = "Youness Najimi";
// 	// printf("%s\n", ft_memchr(s, 'N', 10));
// 	int arr[] = {257, 14, 45, 189};

// 	unsigned char *res = ft_memchr(arr, 1, 4);
// 	int i = 0;
// 	while (i < 6)
// 	{
// 		printf("%d\n", res[i]);
// 		i++;
// 	}
	
// 	return (0);
// }
