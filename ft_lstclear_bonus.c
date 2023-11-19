/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:42:29 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 11:50:26 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst != NULL && del != NULL)
	{
		while (*lst != NULL)
		{
			current = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = current;
		}
	}
}

// void delete_content(void *content)
// {
// 	free(content);
// }

// void print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s ", (char *)lst->content);
// 		lst = lst->next;
// 	}
// 	printf("\n");
// }

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew("Amine "));
// 	ft_lstadd_back(&list, ft_lstnew("Kaddouri"));

// 	printf("The Original List\n");
// 	print_list(list);
	
// 	ft_lstclear(&list, delete_content);

// 	printf("The List after clearing\n");
// 	print_list(list);

// 	return (0);
// }
