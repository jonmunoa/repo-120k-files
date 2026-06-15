// fichero 32385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32385;

Registro32385 crear_registro32385(int id) {
    Registro32385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
