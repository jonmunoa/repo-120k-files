// fichero 20337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20337;

Registro20337 crear_registro20337(int id) {
    Registro20337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
