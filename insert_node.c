#include "header.h"
#include "declaration.h"
#include "structure.h"

void *insert_node(void *head){
	printf("\n BEGIN %s ",__func__);
	node *temp = create_node();
	printf("tmep data = %d\n",temp->val);
	head = (node*)head;
	 
	temp->next = head;
	head = temp;
	printf("\n END %s ",__func__);
	return (void*)head;

	
}
