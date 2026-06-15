// fichero 21337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21337;

Registro21337 crear_registro21337(int id) {
    Registro21337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
