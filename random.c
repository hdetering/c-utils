/**************** RandomNumber  **************************/
/*	This pseudorandom number generator is described in:
	Park, S. K. and K. W. Miller.  1988.  Random number generators: good
	ones are hard to find.  Communications of the ACM, 31(10):1192-1201.
*/

double RandomNumber (long int *seed) {
	long int	lo, hi, test;
	
	hi = (*seed) / 127773;
	lo = (*seed) % 127773;
	test = 16807 * lo - 2836 * hi;
	if (test > 0)
		*seed = test;
	else
		*seed = test + 2147483647;
	return (double)(*seed) / (double)2147483647;
}
