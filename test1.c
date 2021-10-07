/* test1.c --- put() to an empty list
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

int main (void){
	
	car_t car;
	car.next = NULL;
	strcpy(car.plate, "0123456789");
	car.price = 2999.99;
	car.year = 2006;

	int32_t status = lput(&car);

	if (status == 0) {
		exit(EXIT_SUCCESS);
	}
	else {
		exit(EXIT_FAILURE);
	}

}
