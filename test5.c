/* test5.c --- apply() a function to an empty list
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
	p->price = p->price + 1000.00; //add $1000 to price
}

int main (void){
	
	lapply(expensify);

  exit(EXIT_SUCCESS);

}
