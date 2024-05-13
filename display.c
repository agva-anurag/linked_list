#include "header.h"
#include "declaration.h"
#include "structure.h"

void display(void *arg){
	printf("\n BEGIN %s ",__func__);
	node *temp = (node*)arg;
	if(arg == NULL){
		printf("\n list is empty");
	}
	else{
		while(temp != NULL){
			printf("%d->",temp->val);
			temp = temp->next;
		}
		printf("\n");
	}
	printf("\n END %s ",__func__);
	
}
