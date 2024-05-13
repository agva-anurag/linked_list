#include "header.h"
#include "declaration.h"
#include "structure.h"

int main(){
	printf("\n BEGIN %s ",__func__);
	node *head = NULL;
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	head = insert_node((void*)head);
	display((void*)head);
	head = reverse_linked_list((void*)head);
	display((void*)head);

	printf("\n END %s ",__func__);
	return 0;
}
