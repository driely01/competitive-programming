/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   D_oddQueries.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:24:54 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/19 15:24:55 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	limited time at test 4
*/
#include <stdlib.h>
#include <stdio.h>

void sum_arr(int *arr, int length) {
	int sum = 0;

	for (int i = 0; i < length; i++) {
		sum += arr[i];
	}
	if (sum % 2 == 0)
		printf("NO\n");
	else
		printf("YES\n");
}

void change_arr(int *arr, int start, int end, int value) {
	while (start <= end) {
		arr[start] = value;
		start++;
	}
}

int main() {
	int testCases;
	int length;
	int array[225] = {0};
	int *temp;
	int qurr[225] = {0};
	int queries;

	scanf("%d", &testCases);

	for (int i = 0; i < testCases; i++) {

		scanf("%d", &length);
		scanf("%d", &queries);

		for (int j = 0; j < length; j++) {
			scanf("%d", &array[j]);
		}
		temp = calloc(sizeof(int), length);
		for (int i = 0; i < length; i++) {
			temp[i] = array[i];
		}
		for (int k = 0; k < queries; k++) {
			for (int m = 0; m < 3; m++) {
				scanf("%d", &qurr[m]);
			}
			change_arr(array, qurr[0] - 1, qurr[1] - 1, qurr[2]);
			sum_arr(array, length);
			for (int i = 0; i < length; i++) {
				array[i] = temp[i];
			}
		}
	}

	return (0);
}