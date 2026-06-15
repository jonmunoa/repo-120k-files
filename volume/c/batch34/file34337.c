// fichero 34337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34337;

Registro34337 crear_registro34337(int id) {
    Registro34337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
