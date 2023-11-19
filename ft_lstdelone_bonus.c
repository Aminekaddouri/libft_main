/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:35:59 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 11:44:09 by akaddour         ###   ########.fr       */
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

// void    print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%s ", (char *)lst->content); 
//         lst = lst->next;
//     }
//     printf("\n");
// }

// void delete_content(void *content)
// {
// 	free(content);
// }

// int main()
// {
//     t_list *list = NULL; 

//     ft_lstadd_front(&list, ft_lstnew(strdup("World!")));
//     ft_lstadd_front(&list, ft_lstnew(strdup("Hello,")));

//     printf("Original List: ");
//     print_list(list);

//     ft_lstdelone(list, delete_content);

//     printf("List after deletion: ");
//     print_list(list);

//     while (list)
//     {
//         t_list *temp = list;
//         list = list->next;
//         ft_lstdelone(temp, delete_content);
//     }

//     return (0); 
// }