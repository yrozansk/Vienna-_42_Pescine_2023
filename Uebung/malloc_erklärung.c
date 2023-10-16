#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strdup(char *s)
{
	char 		*new;
	size_t		s_len;
	int			i;

	i = -1;
	s_len = strlen(s);
	new = malloc((s_len + 1) * sizeof(char));//uninitialisiert!!
	//new = calloc(6, 1); new = "";
	while (s[++i])
		new[i] = s[i];
	new[i] = '\0';
	return (new);
}

/*void	*ft_calloc(size_t nmemb, size_t size)
{

}*/

int main()
{
	char *s = "Hello";
	char *new = ft_strdup(s);
	printf("%s\n", new);
	free(new);
	return(0);
}