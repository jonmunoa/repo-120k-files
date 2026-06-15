// fichero 4141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4141;

Registro4141 crear_registro4141(int id) {
    Registro4141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
