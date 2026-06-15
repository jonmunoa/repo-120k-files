// fichero 15813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15813;

Registro15813 crear_registro15813(int id) {
    Registro15813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
