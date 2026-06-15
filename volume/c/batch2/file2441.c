// fichero 2441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2441;

Registro2441 crear_registro2441(int id) {
    Registro2441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
