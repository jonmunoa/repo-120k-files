// fichero 42377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42377;

Registro42377 crear_registro42377(int id) {
    Registro42377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
