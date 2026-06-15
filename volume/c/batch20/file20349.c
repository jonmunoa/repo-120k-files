// fichero 20349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20349;

Registro20349 crear_registro20349(int id) {
    Registro20349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
