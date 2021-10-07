/* test8.c --- remove() from a non-empty list at the end
 * 
 * 
 * Author: Brian R. Provost
 * Created: Thu Sep 30 11:28:48 2021 (-0400)
 * Version: 
 * 
 * Description: 
 * 
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>
#include <string.h>
#include "list.h"

int main (void){ //create car object and then call lput to create linked list

	char plate1[] = "0123456789";
	char plate2[] = "0123123123";
	char plate3[] = "1234512345";
	
  car_t car1;
  car1.next = NULL;
	strcpy(car1.plate, "0123456789");
	car1.price = 2999.99;
	car1.year = 2006;

	car_t car2;
  car2.next = NULL;
	strcpy(car2.plate, "0123123123");
	car2.price = 2500.00;
	car2.year = 1999;

	car_t car3;
  car3.next = NULL;
	strcpy(car3.plate, "1234512345");
	car3.price = 1000.00;
	car3.year = 2010;

	lput(&car1);
	lput(&car2);
	lput(&car3);

	car_t *p1 = lremove(plate1);
	car_t *p2 = lremove(plate2);
	car_t *p3 = lremove(plate3);

	if (p1 == &car1 && p2 == &car2 && p3 == &car3) {
		exit(EXIT_SUCCESS);
	}
	else {
		exit(EXIT_FAILURE);
	}
}
