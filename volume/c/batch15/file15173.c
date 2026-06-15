// fichero 15173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15173;

Registro15173 crear_registro15173(int id) {
    Registro15173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
