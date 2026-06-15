// fichero 48441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48441;

Registro48441 crear_registro48441(int id) {
    Registro48441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
