/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Vanya and Fence.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:23:52 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/10 16:34:01 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main() {
	int n;
	int h;
	int i = 0;
	int sum = 0;
	scanf("%d", &n);
	scanf("%d", &h);
	int tab[n];
	while (i < n) {
		scanf("%d", &tab[i]);
		i++;
	}
	i = 0;
	while (i < n) {
		if (tab[i] <= h)
			sum += 1;
		else
			sum += 2;
		i++;
	}
	printf("%d\n", sum);
}