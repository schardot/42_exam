#include <stdlib.h>

char	*ft_strncpy(char *paste, char *copy, int n)
{
	int i = 0;
	if (!copy || !paste)
		return (NULL);
	while (paste[i] && i < n)
	{
		paste[i] = copy[i];
		i ++;
	}
	paste[i] = '\0';
	return (paste);
}
char    **ft_split(char *str)
{
	int	count = 0;
	int	i = 0;
	
        while (str[i])
        {       
                while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
                        i ++;
                if (str[i])
			count ++;
		 while (str[i] && (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')))
			 i ++;
        }
	i = 0;
	char	**res;
	int	start;
	int	r = 0;
	res = (char **)malloc((count + 1) * sizeof(char *));
	
	while(str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
                        i ++;
		start = i;
		while (str[i] && (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')))
			 i ++; 
		//i at this point ta no fim da palavra e start no comeco
        	if (i > start) //quer dizer que realmente teve uma palavra lida
		{
			res[r] = (char *)malloc(i - start + 1);
			if (!res[r])
				return NULL;
			res[r] = ft_strncpy(res[r], &str[start], i - start); 
			r ++;
		}
	}
	res[r] = NULL;
	return (res);
		
}
