// fichero 42253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42253;

Registro42253 crear_registro42253(int id) {
    Registro42253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
