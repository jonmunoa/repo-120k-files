// fichero 16441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16441;

Registro16441 crear_registro16441(int id) {
    Registro16441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
