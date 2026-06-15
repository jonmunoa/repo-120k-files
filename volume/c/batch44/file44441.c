// fichero 44441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44441;

Registro44441 crear_registro44441(int id) {
    Registro44441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
