// fichero 48097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48097;

Registro48097 crear_registro48097(int id) {
    Registro48097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
