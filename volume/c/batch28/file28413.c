// fichero 28413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28413;

Registro28413 crear_registro28413(int id) {
    Registro28413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
