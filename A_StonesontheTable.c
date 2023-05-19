/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_StonesontheTable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 17:28:05 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/10 17:42:59 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	char *str;
	int i = 1;
	int j = 0;
	int flag;
	int counter = 0;

	scanf("%d", &n);
	str = calloc(1, n+1);
	scanf("%s", str);
	while (str[i]) {
		flag = 0;
		if (str[i] == str[j])
		{
			flag = 1;
			j++;
		}
		else 
			j++;
		if (flag == 1)
			counter++;
		i++;
	}
	printf("%d\n", counter);
	return 0;
}