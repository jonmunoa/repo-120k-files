// fichero 42141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42141;

Registro42141 crear_registro42141(int id) {
    Registro42141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
