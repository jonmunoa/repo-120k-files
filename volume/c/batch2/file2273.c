// fichero 2273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2273;

Registro2273 crear_registro2273(int id) {
    Registro2273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
