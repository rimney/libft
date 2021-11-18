/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:46:21 by rimney            #+#    #+#             */
/*   Updated: 2021/11/14 23:56:27 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
size_t  src_len(const unsigned char *src)
{
        size_t  lent;

        lent = 0;
        while (src[lent] != '\0')
                lent++;
        return (lent - 1);
}

void    *ft_memmove(void *dst, const void *src, size_t n)
{
        //size_t                        rev_src;
        //size_t                        rev_dst;
        unsigned char    *s;
        unsigned char           *d;

        d = (unsigned char *)dst;
        s = (unsigned char *)src;
        n--;
        //rev_src = src_len(s);
        //rev_dst = src_len(d);
        //n =- 1;
        while (n > 0)
        {
                        //printf("%c\n", s[rev_src]);
                        d[n] = s[n];
                //rev_dst--;
                //rev_src--;
                n--;
        }
        d[n] = s[n];
        return (d);
}

int	main()
{
	char x[10] = "ab";
	char y[10] =  "12cd";
	char *p = ft_memmove(y, x, 4);
	printf("%s", p);
	return(0);
}
