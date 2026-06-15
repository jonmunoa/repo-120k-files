// fichero 46413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46413;

Registro46413 crear_registro46413(int id) {
    Registro46413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
