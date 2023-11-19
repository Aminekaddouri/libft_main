/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:29:15 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 17:59:46 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	size_t	length;
	char	*str;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		return (ft_strdup(""));
	length = size - start;
	if (length < len)
		len = length;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
	char *res = ft_substr("Amine kaddouri", 6, 8);
	printf("%s\n", res);
}
