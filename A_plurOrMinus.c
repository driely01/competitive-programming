/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_plurOrMinus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:24:35 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/19 15:24:36 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
	int testCases;
	int a;
	int b;
	int c;
	int i;
	
	scanf("%d", &testCases);
	i = 0;
	
	while (i < testCases)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		scanf("%d", &c);
		if (a - b == c)
			printf("-\n");
		else if (a + b == c)
			printf("+\n");
		i++;
	}
	return (0);
}