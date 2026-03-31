#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <event2/event.h>

int main()
{
	const char** p = NULL;
	//p = event_get_supported_methods();
	int i = 0;
	while (p[i])
	{
		printf("%s\n", p[i++]);
	}
	printf("\n");
	//printf("OK\n");
	return 0;
}