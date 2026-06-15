// fichero 48125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48125;

Registro48125 crear_registro48125(int id) {
    Registro48125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
