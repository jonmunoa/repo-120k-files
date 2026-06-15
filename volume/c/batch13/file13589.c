// fichero 13589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13589;

Registro13589 crear_registro13589(int id) {
    Registro13589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
