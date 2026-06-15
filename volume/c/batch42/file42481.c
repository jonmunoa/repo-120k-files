// fichero 42481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42481;

Registro42481 crear_registro42481(int id) {
    Registro42481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
