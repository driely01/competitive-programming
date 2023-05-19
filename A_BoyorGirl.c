/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_BoyorGirl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:44:12 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/10 17:21:22 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int check_double(char *str) {
	int i = 0;
	int j = 0;
	int flag;
	int counter = 0;
	while (str[i]) {
		flag = 0;
		j = i + 1;
		while (str[j]) {
			if (str[i] == str[j])
				flag = 1;
			j++;
		}
		if (flag == 0)
			counter++;
		i++;
	}
	return (counter);
}

int main() {
	char *string;
	int i = 0;
	int j;
	string = calloc(1, 101);
	scanf("%s", string);
	j = check_double(string);
	if (j % 2 == 0)
		puts("CHAT WITH HER!");
	else
		puts("IGNORE HIM!");
	return (0);
}