/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joolibar <joolibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:23:46 by joolibar          #+#    #+#             */
/*   Updated: 2026/03/09 16:14:08 by joolibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *str, char delimit);
static char		*get_word(char const *str, char delimit, size_t *str_pos);
static void		*ft_free(char **split);

char	**ft_split(char const *s, char delimit)
{
	size_t	pos;
	size_t	str_pos;
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((word_count(s, delimit) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	pos = 0;
	str_pos = 0;
	while (s[str_pos] != '\0')
	{
		if (s[str_pos] == delimit)
			str_pos++;
		else
		{
			result[pos] = get_word(s, delimit, &str_pos);
			if (result[pos++] == NULL)
				return (ft_free(result));
		}
	}
	result[pos] = NULL;
	return (result);
}

static size_t	word_count(const char *str, char delimit)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != delimit && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == delimit)
			in_word = 0;
		str++;
	}
	return (count);
}

static void	*ft_free(char **split)
{
	size_t	pos;

	pos = 0;
	while (split[pos] != NULL)
	{
		free(split[pos]);
		pos++;
	}
	free(split);
	return (NULL);
}

static char	*get_word(char const *str, char delimit, size_t *str_pos)
{
	char	*word;
	size_t	w_pos;
	size_t	start_pos;

	w_pos = 0;
	start_pos = *str_pos;
	while (str[*str_pos] != '\0' && str[*str_pos] != delimit)
	{
		w_pos++;
		(*str_pos)++;
	}
	word = (char *)malloc(sizeof(char) * (w_pos + 1));
	if (!word)
		return (NULL);
	w_pos = 0;
	while (start_pos < *str_pos)
		word[w_pos++] = str[start_pos++];
	word[w_pos] = '\0';
	return (word);
}

/* ************************************************************************** */
/*                               FUNCTION TESTING                             */
/* ************************************************************************** */

/* 
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    const char *test_cases[] = {
        "Hello,world,this,is,a,test",
        "   multiple   spaces   here  ",
        "",
        "no_delimiters_here",
        "a,b,c,d,e",
        ",start,and,end,",
        "     "
    };
    char delimiters[] = {',', ' ', ' ', '_', ',', ',', ' '};
    size_t i, j;

    printf("=== TESTING ft_split ===\n\n");

    for (i = 0; i < sizeof(test_cases)/sizeof(test_cases[0]); i++)
    {
        char **split;
        const char *str = test_cases[i];
        char delim = delimiters[i];

        printf("Test string: \"%s\"\nDelimiter: '%c'\n", str, delim);

        split = ft_split(str, delim);
        if (!split)
        {
            printf("Error: ft_split returned NULL\n\n");
            continue;
        }

        for (j = 0; split[j] != NULL; j++)
            printf("Word %zu: \"%s\"\n", j, split[j]);

        if (j == 0)
            printf("No words found\n");

        // Free memory
        j = 0;
        while (split[j] != NULL)
        {
            free(split[j]);
            j++;
        }
        free(split);

        printf("\n");
    }

    return 0;
}
*/