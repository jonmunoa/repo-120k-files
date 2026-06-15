// fichero 15641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15641;

Registro15641 crear_registro15641(int id) {
    Registro15641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
