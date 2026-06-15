// fichero 48601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48601;

Registro48601 crear_registro48601(int id) {
    Registro48601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
