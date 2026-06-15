// fichero 32357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32357;

Registro32357 crear_registro32357(int id) {
    Registro32357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
