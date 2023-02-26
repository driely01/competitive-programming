#include <stdio.h>

// limited time at test 4

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

void subsequance(int *arr, int size)
{
    int i;
    int count;
    int c;
    int n = size - 1;

    count = 1;
    c = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[n] - arr[i] > 5)
        {
            n--;
            c++;
        }
        if (n > 1 && arr[i + 1] - arr[i] <= 5)
        {
            count++;
        }
        else
        {
            count = 1;
            n += c;
            c = 0;
        }
    }
    printf("%d", count);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    int t[n];
    int i;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &t[i]);
    }
    sort_tab(t, n - 1);
    subsequance(t, n);
    return (0);
}