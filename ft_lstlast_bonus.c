/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:00:33 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 12:43:27 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_front(&list, ft_lstnew("kaddouri"));
// 	ft_lstadd_front(&list, ft_lstnew("amine"));
// 	ft_lstadd_front(&list, ft_lstnew("My name is"));

// 	t_list *last_node = ft_lstlast(list);

// 	printf("last node content is : %s\n", (char *)last_node->content);

// 	return (0);
// }
