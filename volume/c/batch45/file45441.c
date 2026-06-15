// fichero 45441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45441;

Registro45441 crear_registro45441(int id) {
    Registro45441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
