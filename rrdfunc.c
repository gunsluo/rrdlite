#include <stdlib.h>
#include <errno.h>
#include "rrd.h"

const char *rrdCreate(const char *filename, unsigned long step, 
		time_t start, int argc, const char **argv) {
	int ret;
	ret = rrd_create_r(filename, step, start, argc, argv);
	return rrd_strerror(ret);
}

const char *rrdUpdate(const char *filename, const char *template, 
		int argc, const char **argv, unsigned long start_tm) {
	int ret;
	ret = rrd_update_r(filename, template, argc, argv, start_tm);
	return rrd_strerror(ret);
}


const char *rrdInfo(rrd_info_t **info, char *filename) {
	int ret = 0;
	*info = rrd_info_r(filename, &ret);
	return rrd_strerror(ret);
}

const char *rrdFetch(int *ret, char *filename, const char *cf, time_t *start, 
		time_t *end, unsigned long *step, unsigned long *ds_cnt, 
		char ***ds_namv, double **data) {
	*ret = rrd_fetch_r(filename, cf, start, end, step, ds_cnt, ds_namv, data);
	return rrd_strerror(*ret);
}

char *arrayGetCString(char **values, int i) {
	return values[i];
}

int getErrno(void){
	return errno;
}
