// fichero 2413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2413;

Registro2413 crear_registro2413(int id) {
    Registro2413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
