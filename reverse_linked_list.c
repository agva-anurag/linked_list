#include "header.h"
#include "declaration.h"
#include "structure.h"

void* reverse_linked_list(void *arg){
	node *cur = (node*)arg ,*prev= NULL, *next =NULL;
	while(cur != NULL){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	return prev;

}
