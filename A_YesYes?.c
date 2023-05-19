/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_YesYes?.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:30:45 by del-yaag          #+#    #+#             */
/*   Updated: 2023/05/19 15:30:57 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
 
int main(void)
{
	int t;
	char *s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
	scanf("%d", &t);
	while (t--) {
		char s2[60];
		scanf("%s\n", s2);
		if (strstr(s, s2))
			printf("Yes\n");
		else
			printf("No\n");
	}
}