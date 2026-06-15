// fichero 46273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46273;

Registro46273 crear_registro46273(int id) {
    Registro46273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
