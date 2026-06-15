// fichero 18337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18337;

Registro18337 crear_registro18337(int id) {
    Registro18337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
