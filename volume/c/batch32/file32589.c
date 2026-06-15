// fichero 32589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32589;

Registro32589 crear_registro32589(int id) {
    Registro32589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
