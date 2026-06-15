// fichero 36989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36989;

Registro36989 crear_registro36989(int id) {
    Registro36989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
