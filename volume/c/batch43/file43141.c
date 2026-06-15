// fichero 43141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43141;

Registro43141 crear_registro43141(int id) {
    Registro43141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
