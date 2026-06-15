// fichero 15129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15129;

Registro15129 crear_registro15129(int id) {
    Registro15129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
