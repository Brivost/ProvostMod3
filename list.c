/* list.c --- Implements list.h for list of cars
 * 
 * 
 * Author: Brian R. Provost
 * Created: Thu Sep 30 10:37:37 2021 (-0400)
 * Version: 
 * 
 * Description: Manipulates a list of cars
 * 
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"

static car_t *front=NULL;


/* lput(): place a car at the beginning of the list
 * returns 0 if successful; nonzero otherwise
 */
int32_t lput(car_t *cp){ //*cp is a pointer to a car we want to add to
												 //front of list
	if (front==NULL) { //check if list is empty
		 front = cp;
		 return 0;
	}
  else {
		cp->next = front;
		front = cp;
		return 0;
	}
	return 1;
}

/* lget(): remove and return the first car in the list;
 * return NULL if the list is empty
 */ 
car_t *lget(){

  car_t *temp;

	if (front==NULL) {
		return NULL;
	}
	else {
		temp = front;
		front = front->next;
		return temp;
	}

}

/* apply a function to every car in the list */
void lapply(void (*fn)(car_t *cp)){

	car_t *p;

	for(p=front; p!=NULL; p=p->next) {
		fn(p);
	}

}

/* lremove(): find, remove, and return any car with
 * the designated plate; return NULL if not present
 */
car_t *lremove(char *platep){

	car_t *p, *f;

	for(p=front; p!=NULL; p=p->next) {

		if ((strcmp(platep, p->plate))==0) {

			if (p == front) { //check if first car is a match
				front = p->next;
			}
			else if ( p->next == NULL) { //check if last car is a match
				f->next = NULL;
			}
			else {
				f->next = p->next;
			}
		
			return p;
		}
			f = p;
	}

	return NULL;

}
