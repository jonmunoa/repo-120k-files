// fichero 45597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45597;

Registro45597 crear_registro45597(int id) {
    Registro45597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
