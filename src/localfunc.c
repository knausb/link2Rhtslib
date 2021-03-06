#include "zlib.h"
#include "zconf.h"
#include <Rdefines.h>
#include "hts.h"

SEXP localfunc() {
    Rprintf("Hello from localfunc\n");
    return R_NilValue;
}

SEXP extvers() {
    return Rf_mkString(hts_version());
}

SEXP zlibVers() {
	return Rf_mkString(zlibVersion());
}
