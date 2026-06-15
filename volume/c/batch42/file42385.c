// fichero 42385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42385;

Registro42385 crear_registro42385(int id) {
    Registro42385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
