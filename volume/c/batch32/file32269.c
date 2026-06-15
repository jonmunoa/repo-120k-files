// fichero 32269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32269;

Registro32269 crear_registro32269(int id) {
    Registro32269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
