// fichero 32641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32641;

Registro32641 crear_registro32641(int id) {
    Registro32641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
