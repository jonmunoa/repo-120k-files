// fichero 39337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39337;

Registro39337 crear_registro39337(int id) {
    Registro39337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
