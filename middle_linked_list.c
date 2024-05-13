#include "header.h"
#include "declaration.h"
#include "structure.h"

void *middle_linked_list(void* arg){
	node *fast = (node*)arg;
	node *slow = (node*)arg;

	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
	return 0;
}
