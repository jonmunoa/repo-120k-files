// fichero 46113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46113;

Registro46113 crear_registro46113(int id) {
    Registro46113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
