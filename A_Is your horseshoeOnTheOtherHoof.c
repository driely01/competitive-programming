/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Is your horseshoeOnTheOtherHoof.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 11:44:11 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/12 21:21:37 by del-yaag         ###   ########.fr       */
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

int check_dub(int s1, int s2, int s3, int s4)
{
	char *str = malloc(sizeof(char)* 5);
	str[0] = s1 + 48;
	str[1] = s2 + 48;
	str[2] = s3 + 48;
	str[3] = s4 + 48;
	str[4] = '\0';
	int i = 0;
	int count ;
	count = check_double(str);
	return count;
}
int main() {
	int s1;
	int s2;
	int s3;
	int s4;
	
	scanf("%d", &s1);
	scanf("%d", &s2);
	scanf("%d", &s3);
	scanf("%d", &s4);
	printf("%d\n", 4 - check_dub(s1, s2, s3, s4));
	return 0;
}