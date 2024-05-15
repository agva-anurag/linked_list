#include "header.h"
#include "declaration.h"
#include "structure.h"

int main(){
	printf("\n BEGIN %s ",__func__);
	node *head = NULL;
	node *middle = NULL;
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	display((void*)head);
	head = reverse_linked_list((void*)head);
	display((void*)head);
	middle = middle_linked_list((void*)head);
	display((void*)middle);
	printf(" cyclic = %d \n",cyclic_or_not((void*)head));
	printf("\n END %s ",__func__);
	return 0;
}
