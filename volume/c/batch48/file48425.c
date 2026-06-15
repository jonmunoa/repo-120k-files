// fichero 48425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48425;

Registro48425 crear_registro48425(int id) {
    Registro48425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
