/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:22:39 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 14:19:51 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if ((!dst && !src) || n == 0 || (dst == src))
		return (dst);
	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

// int main()
// {
// 	int d[5];
// 	int s[4] = {7, 19, 82, 125};
	
// 	unsigned char *res = ft_memcpy(d, s, 12);
// 	int i = 0;
// 	while (i < 12)
// 	{
// 		printf("%d\n", res[i]);
// 		i += 4;
// 	}
// 	return (0);
// }
