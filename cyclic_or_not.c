#include "header.h"
#include "declaration.h"
#include "structure.h"

bool cyclic_or_not(void *arg){
	node *fast = (node*) arg;
	node *slow = (node*) arg;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(slow==fast){
			return true;
		}
		return false;
	}
	return 0;
}
