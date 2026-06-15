// fichero 48377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48377;

Registro48377 crear_registro48377(int id) {
    Registro48377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
