// fichero 15033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15033;

Registro15033 crear_registro15033(int id) {
    Registro15033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
