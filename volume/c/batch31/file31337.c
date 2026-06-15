// fichero 31337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31337;

Registro31337 crear_registro31337(int id) {
    Registro31337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
