// fichero 43349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43349;

Registro43349 crear_registro43349(int id) {
    Registro43349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
