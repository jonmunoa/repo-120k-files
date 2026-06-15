// fichero 28937 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28937;

Registro28937 crear_registro28937(int id) {
    Registro28937 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
