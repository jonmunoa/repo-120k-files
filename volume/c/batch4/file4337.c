// fichero 4337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4337;

Registro4337 crear_registro4337(int id) {
    Registro4337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
