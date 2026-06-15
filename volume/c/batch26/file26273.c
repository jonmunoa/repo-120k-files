// fichero 26273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26273;

Registro26273 crear_registro26273(int id) {
    Registro26273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
