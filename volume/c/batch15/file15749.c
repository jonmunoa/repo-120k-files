// fichero 15749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15749;

Registro15749 crear_registro15749(int id) {
    Registro15749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
