// fichero 37597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37597;

Registro37597 crear_registro37597(int id) {
    Registro37597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
