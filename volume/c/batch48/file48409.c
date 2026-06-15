// fichero 48409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48409;

Registro48409 crear_registro48409(int id) {
    Registro48409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
