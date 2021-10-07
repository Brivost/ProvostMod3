/* test2.c --- put() to a non-empty list
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

	int32_t status1 = lput(&car1);
	int32_t status2 = lput(&car2);

	if (status1 == 0 && status2 == 0) {
		exit(EXIT_SUCCESS);
	}
	else {
		exit(EXIT_FAILURE);
	}
}
