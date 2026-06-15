// fichero 15421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15421;

Registro15421 crear_registro15421(int id) {
    Registro15421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
