// fichero 14597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14597;

Registro14597 crear_registro14597(int id) {
    Registro14597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
