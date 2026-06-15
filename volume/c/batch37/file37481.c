// fichero 37481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37481;

Registro37481 crear_registro37481(int id) {
    Registro37481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
