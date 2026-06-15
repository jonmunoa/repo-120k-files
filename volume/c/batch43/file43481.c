// fichero 43481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43481;

Registro43481 crear_registro43481(int id) {
    Registro43481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
