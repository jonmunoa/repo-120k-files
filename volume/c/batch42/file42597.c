// fichero 42597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42597;

Registro42597 crear_registro42597(int id) {
    Registro42597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
