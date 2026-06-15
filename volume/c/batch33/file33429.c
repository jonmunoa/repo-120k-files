// fichero 33429 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33429;

Registro33429 crear_registro33429(int id) {
    Registro33429 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
