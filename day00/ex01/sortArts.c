#inlcude "header.h"
#include <string.h>


int 	comp(void *a, void *b)
{
	return (strcmp(((struct s_art *)(a))->name, ((struct s_art *)(b))->name));
}	

void	sortArts(struct s_art ** arts)
{
	int len = sizeof(arts) / sizeof(*arts);
	qsort((void)*arts, len, sizeof(*arts), comp);		
}