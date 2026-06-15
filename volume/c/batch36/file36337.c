// fichero 36337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36337;

Registro36337 crear_registro36337(int id) {
    Registro36337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
