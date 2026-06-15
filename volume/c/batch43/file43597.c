// fichero 43597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43597;

Registro43597 crear_registro43597(int id) {
    Registro43597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
