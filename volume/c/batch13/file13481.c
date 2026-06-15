// fichero 13481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13481;

Registro13481 crear_registro13481(int id) {
    Registro13481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
