// fichero 48329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48329;

Registro48329 crear_registro48329(int id) {
    Registro48329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
