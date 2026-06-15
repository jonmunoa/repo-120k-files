// fichero 15233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15233;

Registro15233 crear_registro15233(int id) {
    Registro15233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
