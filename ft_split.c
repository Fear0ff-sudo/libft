/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 13:48:21 by amanet            #+#    #+#             */
/*   Updated: 2026/11/06 16:58:57 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_all(char **res, int k)
{
	while (k > 0)
	{
		k--;
		free(res[k]);
	}
	free(res);
	return (NULL);
}

int	ft_splitcnt(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			res++;
		i++;
	}
	return (res);
}

char	*ft_splitassign(char const *s, int start, int len)
{
	int		j;
	char	*word;

	j = 0;
	word = malloc(sizeof(char) * (len - start + 1));
	if (word == NULL)
		return (NULL);
	while (start < len)
	{
		word[j] = s[start];
		j++;
		start++;
	}
	word[j] = '\0';
	return (word);
}

char	*ft_splitword(char const *s, char c, int *ip)
{
	int	start;
	int	i;

	i = *ip;
	start = i;
	while (s[i] && s[i] != c)
		i++;
	*ip = i;
	return (ft_splitassign(s, start, i));
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**res;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (ft_splitcnt(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			res[k] = ft_splitword(s, c, &i);
			if (res[k] == NULL)
				return (ft_free_all(res, k));
			k++;
		}
	}
	res[k] = NULL;
	return (res);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	char **split;
// 	if (argc > 2)
// 	{
// 		split = ft_split(argv[1], argv[2][0]);
// 		//splitSize = ft_splitsize(argv[1], argv[2][0]);
// 		// printf("ft : %d", ft_splitcnt(argv[1], argv[2][0]));
// 		printf("ft : %s %s", split[0], split[1]);
// 	}
// 	return (0);
// }