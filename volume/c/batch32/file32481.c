// fichero 32481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32481;

Registro32481 crear_registro32481(int id) {
    Registro32481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
