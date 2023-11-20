/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 19:12:10 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 15:03:37 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *s1 = "amine";
// 	char *s2 = "kaddouri";
// 	size_t n = 10;
// 	int res = ft_strncmp(s1, s2, n);
// 	printf("%d\n", res);
// 	return (0);
// }
