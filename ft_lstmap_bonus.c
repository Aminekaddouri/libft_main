/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaddour <akaddour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:49:03 by akaddour          #+#    #+#             */
/*   Updated: 2023/11/19 16:41:45 by akaddour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	void	*new_content;
	t_list	*node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		if (lst->content != NULL)
		{
			new_content = f(lst->content);
			node = ft_lstnew(new_content);
			if (node == NULL)
			{
				del(new_content);
				ft_lstclear(&result, del);
				return (NULL);
			}
			ft_lstadd_back(&result, node);
		}
		lst = lst->next;
	}
	return (result);
}

// void    *duplicate_content(void *content)
// {
//     return strdup((char *)content);
// }

// void    *print_content(void *content)
// {
//     printf("%s ", (char *)content);
// 	return (content);
// }

// void    delete_content(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list *list = NULL;

//     ft_lstadd_front(&list, ft_lstnew("World!"));
//     ft_lstadd_front(&list, ft_lstnew("Hello,"));

//     printf("Original List: ");
//     ft_lstmap(list, print_content, delete_content);
//     printf("\n");

//     t_list *newList = ft_lstmap(list, duplicate_content, delete_content);

//     printf("New List: ");
//     ft_lstmap(newList, print_content, delete_content);
//     printf("\n");

//     return (0);
// }
