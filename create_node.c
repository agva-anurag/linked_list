#include "header.h"
#include "declaration.h"
#include "structure.h"

void *create_node(){
	printf("\n BEGIN %s ",__func__);
	node *temp = (node*)malloc(sizeof(node));
	static int i = 0;
	temp->val = i++;
	temp->next = NULL;
	printf("\n END %s ",__func__);
	return (void*)temp;
}
