/* test4.c --- get() from a non-empty list
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

void expensify(car_t *p) {
	p->price = p->price + 1000.00;
}

int main (void){ //create car object and then call lput to create linked list

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

	double car1OldPrice = car1.price;
	double car2OldPrice = car2.price;
	double car3OldPrice = car3.price;

	lapply(expensify);

	double car1NewPrice = car1.price;
	double car2NewPrice = car2.price;
	double car3NewPrice = car3.price;

	if (car1NewPrice == car1OldPrice+1000 &&
			car2NewPrice == car2OldPrice+1000 &&
			car3NewPrice == car3OldPrice+1000) {
		exit(EXIT_SUCCESS);
	}
	else {
		exit(EXIT_FAILURE);
	}
}
