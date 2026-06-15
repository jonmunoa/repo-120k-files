// fichero 2269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2269;

Registro2269 crear_registro2269(int id) {
    Registro2269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
