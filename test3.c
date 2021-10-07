/* test3.c --- get() from an empty list
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
	
	car_t *car;

	car = lget();

	if (car == NULL) {
		exit(EXIT_SUCCESS);
	}
	else {
		exit(EXIT_FAILURE);
	}

}
