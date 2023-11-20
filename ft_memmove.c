/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:29:07 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 14:22:31 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if ((!src && !dst) || len == 0 || (dst == src))
		return (dst);
	s = (char *)src;
	d = (char *)dst;
	if (s < d)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}

// int main()
// {
// 	int n[] = {47, 51, 12, 9};
// 	unsigned char *res = ft_memmove(n + 2, n, 8);
// 	int i = 0;
// 	while (i < 8)
// 	{
// 		printf("%d\n", res[i]);
// 		i += 4;
// 	}
// 	return (0);
// }
