// fichero 15381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15381;

Registro15381 crear_registro15381(int id) {
    Registro15381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
