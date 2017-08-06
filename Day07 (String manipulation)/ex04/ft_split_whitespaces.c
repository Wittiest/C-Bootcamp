/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <dpearson@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:11:02 by dpearson          #+#    #+#             */
/*   Updated: 2017/07/05 21:11:03 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define WHITESPACE(x) x == '\t' || x == '\n' || x == ' '

#include <stdlib.h>

/*
** Go through each character in the string with str[i] and i++.
** We add a word after we:
** 		1. White space at front of string
**		2. Characters after that white space
**		3. Find more white space
*/

int		ft_word_count(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t') && (i == 0
		|| str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t'))
			words++;
		i++;
	}
	return (words);
}

/*
** function will remove white space from front of word with str++,
** then count the real word with i++
*/

int		ft_word_size(char *str)
{
	int i;

	i = 0;
	while (WHITESPACE(str[i]) && str[i])
		str++;
	while (!(WHITESPACE(str[i])) && str[i])
		i++;
	return (i);
}

/*
** First we will find the word count and use this to allocate memory
** for the array "words" that holds each word and a null byte
** Then we will go through each word, allocating memory
** for its characters and a null byte
*/

char	**ft_split_whitespaces(char *str)
{
	int		word_count;
	int		words_entered;
	int		i;
	char	**words;
	char	*word;

	words_entered = 0;
	word_count = ft_word_count(str);
	words = (char**)malloc(sizeof(char*) * (word_count + 1));
	while (words_entered < word_count)
	{
		i = 0;
		word = (char*)malloc(sizeof(char) * (ft_word_size(str) + 1));
		while (WHITESPACE(str[0]) && str[0])
			str++;
		while (!(WHITESPACE(str[0])) && str[0])
			word[i++] = *str++;
		word[i] = '\0';
		words[words_entered++] = word;
	}
	words[word_count] = 0;
	return (words);
}
