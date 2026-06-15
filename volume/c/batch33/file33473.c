// fichero 33473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33473;

Registro33473 crear_registro33473(int id) {
    Registro33473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
