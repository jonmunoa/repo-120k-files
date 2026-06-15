// fichero 16337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16337;

Registro16337 crear_registro16337(int id) {
    Registro16337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
