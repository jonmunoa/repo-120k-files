// fichero 37245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37245;

Registro37245 crear_registro37245(int id) {
    Registro37245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
