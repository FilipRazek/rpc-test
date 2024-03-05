/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "random.h"


void
random_1(char *host)
{
	CLIENT *clnt;
	void  *result_1;
	bounds  set_bounds_1_arg;
	int  *result_2;
	char *next_random_1_arg;

#ifndef	DEBUG
	clnt = clnt_create (host, RANDOM, VERSION_UN, "udp");
	if (clnt == NULL) {
		clnt_pcreateerror (host);
		exit (1);
	}
#endif	/* DEBUG */

	result_1 = set_bounds_1(&set_bounds_1_arg, clnt);
	if (result_1 == (void *) NULL) {
		clnt_perror (clnt, "call failed");
	}
	result_2 = next_random_1((void*)&next_random_1_arg, clnt);
	if (result_2 == (int *) NULL) {
		clnt_perror (clnt, "call failed");
	}
#ifndef	DEBUG
	clnt_destroy (clnt);
#endif	 /* DEBUG */
}


int
main (int argc, char *argv[])
{
	char *host;

	if (argc < 2) {
		printf ("usage: %s server_host\n", argv[0]);
		exit (1);
	}
	host = argv[1];
	random_1 (host);
exit (0);
}
