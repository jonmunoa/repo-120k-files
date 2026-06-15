// fichero 37349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37349;

Registro37349 crear_registro37349(int id) {
    Registro37349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
