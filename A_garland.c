/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_garland.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:23:54 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/19 15:24:05 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int check_doubles(char *str) {
	int i = 0;
	int j = 0;
	int counter = 0;

	while (str[i]) {
		j = i + 1;
		while (str[j]) {
			if (str[i] == str[j])
				counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

int main(void)
{
	int testCases;
	char tests[4] = {0};
	
	scanf("%d", &testCases);

	for (int i = 0; i < testCases; i++) {
		scanf("%s", tests);
		printf("%d\n", check_doubles(tests));
	}
}