// fichero 5441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5441;

Registro5441 crear_registro5441(int id) {
    Registro5441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
