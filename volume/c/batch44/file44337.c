// fichero 44337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44337;

Registro44337 crear_registro44337(int id) {
    Registro44337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
