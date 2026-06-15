// fichero 32349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32349;

Registro32349 crear_registro32349(int id) {
    Registro32349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
