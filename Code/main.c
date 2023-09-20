/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:06:04 by jode-jes          #+#    #+#             */
/*   Updated: 2023/09/19 11:37:54 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include push_swap.h

int main(int argc, char **argv)
{   
    t_stack_node *a;
    t_stack_node *b;

    a = NULL;
    b = NULL;
    
    if (argc == 1 || (argc == 2 && !argv [1[0]))
        return (1);
    //if (argc == 2 && ft_strchr(argv[1], ' ')) #Filipe Azevedo code
    //if (argc == 2)
    //    argv = ft_split (argv[1], ' ');
    //if (argv == NULL)
	//	return (write(2, "Error\n", 6)); #Filipe Azevedo code
    stack_init (&a, argv + 1);
    if (!stack_is_sorted(a))
    {
        if (stack_len (a) == 2)
            move (&a, &b, SA);
        else if (stack_len (a) == 3)
            tiny_sort (&a);
        else 
            push_swap (&a, &b;)
    }
    free_stack (&a);
    //free_stack (&b); #Filipe Azevedo code
    return(0); //Luís Balsa code
}