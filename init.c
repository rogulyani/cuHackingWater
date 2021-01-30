#include "defs.h"

void initDrinker(float *w, int alc, int caf, int time, drinkerType **d1){
    *d1 = malloc(sizeof(drinkerType));
    (*d1)->alcholo = alc;
    (*d1)->caffine = caf;
    (*d1)->timeWorkOut = time;
    (*d1)->weight = w;
    (*d1)->total = 0;
}

