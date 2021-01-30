#include "defs.h"

void initDrinker(float *w, int alc, int caf, int time, struct drinker **d1){
    *d1 = malloc(sizeof(Drinker));
    (*d1)->alcholo = alc;
    (*d1)->caffine = caf;
    (*d1)->timeWorkOut = time;
    (*d1)->weight = w;
    (*d1)->total = 0;
}

