// fichero 42421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42421;

Registro42421 crear_registro42421(int id) {
    Registro42421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
