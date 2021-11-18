/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:40:44 by rimney            #+#    #+#             */
/*   Updated: 2021/11/12 15:19:28 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *str, char c)
{
	int	count;
	int	trg;
	int	i;

	i = 0;
	count = 0;
	trg = 0;
	while (str[i])
	{
		if (str[i] != c && trg == 0)
		{
			trg = 1;
			count++;
		}
		else if (str[i] == c)
			trg = 0;
		i++;
	}
	return (count);
}

static int	ft_index(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

static	char	*ft_strsplit(char **argv, const char *str, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < ft_count(str, c))
	{
		k = 0;
		argv[i] = malloc(sizeof(char) * ft_index(&str[j], c) + 1);
		while (str[j] == c)
			j++;
		while (str[j] != c && str[j])
			argv[i][k++] = str[j++];
		argv[i][k] = '\0';
		j++;
		i++;
	}
	argv[i] = NULL;
	return (*argv);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**argv;

	i = 0;
	if (!s)
		return (NULL);
	argv = malloc(sizeof(char *) * ft_count(s, c) + 1);
	if (!argv)
		return (NULL);
	argv[i] = ft_strsplit(argv, s, c);
	return (argv);
}
