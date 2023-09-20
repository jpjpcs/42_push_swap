/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 09:58:29 by jode-jes          #+#    #+#             */
/*   Updated: 2023/09/20 16:16:44 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include push_swap.h
//#include <stdio.h>


// check syntax errors
// convert into int to compare similar things
// check overflow | underflow
// check duplicates/ repetitions
// if everything ok, append node, 
//changing the address for which the pointer of the pointer is pointing.
// Its stops pointing to a list of empty arguments and starts pointing to the new created one.

void stack_init (t_stack_node **a, char **argv)
{
    int i;
    long num;

    i = 0;
    while (argv[i])
    {
        if (error_syntax(argv[i]))
            error_free (a, argv);
        num = ft_atol (argv[i]);
        // I will need atol. because argv is a char.
        // In that sense I must convert it into an integer. 
        // The logic that: "I don´t need atol, because accordingly with the subject: 
        //In case of error, it must display "Error" followed by a ’\n’ on the standard error.
        //Errors include for example: some arguments aren’t integers. So, we don´t need atol 
        //because if the input its not made ny integers, the code should give an error, and not
        //transform a str into an integer. That´s not what the subject is asking us to do." becomes false.
        if (num > INT_MAX || num < INT_MIN)
            error_free (a, argv);
        if (error_repetition(*a, int(num)))
            error_free(a, argv);
        append_node(a, (int)num);
        i++;
    }
}