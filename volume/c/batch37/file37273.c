// fichero 37273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37273;

Registro37273 crear_registro37273(int id) {
    Registro37273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
