// fichero 37269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37269;

Registro37269 crear_registro37269(int id) {
    Registro37269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
