// fichero 46441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46441;

Registro46441 crear_registro46441(int id) {
    Registro46441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
