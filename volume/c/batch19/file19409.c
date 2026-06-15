// fichero 19409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19409;

Registro19409 crear_registro19409(int id) {
    Registro19409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
