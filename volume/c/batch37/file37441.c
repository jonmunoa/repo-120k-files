// fichero 37441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37441;

Registro37441 crear_registro37441(int id) {
    Registro37441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
