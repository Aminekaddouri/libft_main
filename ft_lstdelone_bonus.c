/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:35:59 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/20 12:45:30 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
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

// void delete_content(void *content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list *list = NULL;
// 	ft_lstadd_back(&list, ft_lstnew(strdup("amine ")));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("kaddouri" )));
// 	ft_lstadd_back(&list, ft_lstnew(strdup("1337")));

// 	printf("The original List\n");
// 	print_list(list);

// 	ft_lstdelone(list, delete_content);
// 	printf("the list sfter delation\n");
// 	print_list(list);
	
// 	return (0);
// }
