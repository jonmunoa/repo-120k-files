// fichero 26133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26133;

Registro26133 crear_registro26133(int id) {
    Registro26133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
