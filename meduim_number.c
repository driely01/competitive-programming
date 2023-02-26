#include <stdio.h>

void	sort_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = -1;
		}
		i++;
	}
}

int main(void)
{
    int n;
    int t[4];
    int i;
    int j = 0;

    scanf("%d", &n);
    int r[n];

    while (j < n)
    {
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &t[i]);
        }
        if (i == 3)
        {
            sort_tab(t, 2);
            r[j] = t[1];
        }
        j++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", r[i]);
    }
}