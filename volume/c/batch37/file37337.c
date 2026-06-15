// fichero 37337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37337;

Registro37337 crear_registro37337(int id) {
    Registro37337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
