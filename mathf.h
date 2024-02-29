/** @file mathf.h (@ equivalente allo slash)
	@brief Library of functions for computing integrals
	@author Paolo Gastaldo

	Details.
*/


#ifndef MATHF_H //se la stringa mathf non è mai stata definita, ecco la definizione, se è già stata definita allora non entra nell'if 
#define MATHF_H
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

float Polynomial(float* coeff, int size, float in);
void Rectangular(float* values, int size, float stepsize, float* integ1, float* integ2);
float Trapezoidal(float* values, int size, float stepsize);

#endif