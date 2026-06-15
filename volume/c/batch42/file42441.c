// fichero 42441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42441;

Registro42441 crear_registro42441(int id) {
    Registro42441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
