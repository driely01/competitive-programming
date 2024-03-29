/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B_crabTheCandies.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:24:42 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/19 15:24:43 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void is_win(int *arr, int size) {
	int i = 0;
	int mihai = 0;
	int bianca = 0;

	while (i < size) {
		if (arr[i]  % 2 == 0)
			mihai += arr[i];
		else
			bianca += arr[i];
		i++;
	}
	if (mihai > bianca)
		printf("YES\n");
	else
		printf("NO\n");
}

int main() {
	int testCases;
	int arraySize;
	int array[255] = {0};
	int i;
	int j;

	i = 0;
	scanf("%d", &testCases);

	while (i < testCases) {
		j = 0;
		scanf("%d", &arraySize);
		while (j < arraySize) {
			scanf("%d", &array[j]);
			j++;
		}
		is_win(array, arraySize);
		i++;
	}
	return (0);
}