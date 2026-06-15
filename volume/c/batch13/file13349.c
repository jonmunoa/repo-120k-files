// fichero 13349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13349;

Registro13349 crear_registro13349(int id) {
    Registro13349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
