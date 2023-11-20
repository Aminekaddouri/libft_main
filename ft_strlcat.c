/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:56:50 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 15:06:58 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sl;
	size_t	dl;

	i = 0;
	j = ft_strlen(dst);
	dl = j;
	sl = ft_strlen(src);
	if (size == 0 || size <= dl)
		return (size + sl);
	while (src[i] != '\0' && i < (size - dl - 1))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (sl + dl);
}

int main()
{
	char d[50] = "amine ";
	char *s = "kaddouri";
	size_t l = 15;
	size_t res = ft_strlcat(d, s, l);
	printf("%zu\n", res);
	printf("%s\n", d);
}
