// fichero 46321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46321;

Registro46321 crear_registro46321(int id) {
    Registro46321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
