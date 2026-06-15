// fichero 46597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46597;

Registro46597 crear_registro46597(int id) {
    Registro46597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
