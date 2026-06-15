// fichero 4589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4589;

Registro4589 crear_registro4589(int id) {
    Registro4589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
