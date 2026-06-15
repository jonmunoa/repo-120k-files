// fichero 13357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13357;

Registro13357 crear_registro13357(int id) {
    Registro13357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
