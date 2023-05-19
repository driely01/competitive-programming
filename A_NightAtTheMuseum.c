/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_NightAtTheMuseum.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:18:55 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/19 15:12:30 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int i = 0;
    int j = 0;
    int k = 0;
    int count1 = 0;
    int count2 = 0;
    int sum = 0;
    char *str = "abcdefghijklmnopqrstuvwxyz";
    char *st;

	st = calloc(1, 101);
    scanf("%s", st);
 
    while(st[i]) {
        count1 = 0;
        count2 = 0;
        while(str[j] != st[i]) {
            j++;
            count1++;
            if (j == 26)
                j = 0;
        }
        while(str[k] != st[i]) {
            k--;
            count2++;
            if (k == -1)
                k = 25;
        }
        if (count1 > count2)
            sum += count2;
        else
            sum += count1;
        i++;
    }
    printf("%d\n", sum);
    return 0;
}
