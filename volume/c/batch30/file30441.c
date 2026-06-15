// fichero 30441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30441;

Registro30441 crear_registro30441(int id) {
    Registro30441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
