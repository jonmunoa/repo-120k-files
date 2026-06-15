// fichero 46253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46253;

Registro46253 crear_registro46253(int id) {
    Registro46253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
