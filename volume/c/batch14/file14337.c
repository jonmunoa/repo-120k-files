// fichero 14337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14337;

Registro14337 crear_registro14337(int id) {
    Registro14337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
