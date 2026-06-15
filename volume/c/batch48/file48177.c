// fichero 48177 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48177;

Registro48177 crear_registro48177(int id) {
    Registro48177 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
