// fichero 27441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27441;

Registro27441 crear_registro27441(int id) {
    Registro27441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
