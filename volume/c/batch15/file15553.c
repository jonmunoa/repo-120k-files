// fichero 15553 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15553;

Registro15553 crear_registro15553(int id) {
    Registro15553 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
