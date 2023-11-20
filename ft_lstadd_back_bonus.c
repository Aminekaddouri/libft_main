/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:51:33 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 11:18:15 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst != NULL)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
	}
}

// void print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew("amine "));
// 	ft_lstadd_back(&list, ft_lstnew("kaddouri" ));
// 	ft_lstadd_back(&list, ft_lstnew("1337"));

// 	print_list(list);
// 	return (0);
// }
