#include "header.h"
#include <string.h>

int	searchPrice(struct s_art **arts, char *name)
{
	if(!name || !arts || !*arts)
		return (-1);
	while(arts || *arts){
		if(strcmp((*arts)->name, name) == 0){
			return ((*arts)->price);
		arts++;
		}
	}
	return(-1);
}