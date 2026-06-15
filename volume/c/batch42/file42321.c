// fichero 42321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42321;

Registro42321 crear_registro42321(int id) {
    Registro42321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
