/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 00:22:05 by lagea             #+#    #+#             */
/*   Updated: 2024/03/23 22:44:32 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!lst)
        return NULL;
    if (*lst == NULL)
    {
        *lst = new;
        return;
    }
    last = ft_lstlast(lst);
    last->next = new;
}

/*int main(void)
{
    t_list *lst;
    t_list *new;

    lst = ft_lstnew((void*)15);
    new->content = (void*) 30;
    new->next = NULL;
    ft_lstadd_back(&lst,new);
    //ft_lstadd_front(&lst,new);

    //while(lst->next != NULL)
    //printf("%d\n",lst->content);
    //printf("%d\n",ft_lstsize(lst));
}
*/