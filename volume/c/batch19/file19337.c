// fichero 19337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19337;

Registro19337 crear_registro19337(int id) {
    Registro19337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
