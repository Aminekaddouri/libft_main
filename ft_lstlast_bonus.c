/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:00:33 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 11:10:11 by akaddour         ###   ########.fr       */
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
// 	ft_lstadd_front(&list, ft_lstnew("Kaddouri"));
// 	ft_lstadd_front(&list, ft_lstnew("Amine "));

// 	t_list *lastNode = ft_lstlast(list);
// 	printf("The Content of The Last Node Is : %s\n", (char *)lastNode->content);

// 	return (0);
// }
