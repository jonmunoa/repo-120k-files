// fichero 27597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27597;

Registro27597 crear_registro27597(int id) {
    Registro27597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
