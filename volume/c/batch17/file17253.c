// fichero 17253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17253;

Registro17253 crear_registro17253(int id) {
    Registro17253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
