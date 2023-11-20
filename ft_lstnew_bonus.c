/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:24:19 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 12:33:49 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	// char *s = "amine";
// 	// t_list *node = ft_lstnew(s);
// 	int n = 125;
// 	t_list *node = ft_lstnew(&n);
// 	printf("%d \n", *(int *)node->content);
// 	return (0);
// }
