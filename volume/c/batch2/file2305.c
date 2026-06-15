// fichero 2305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2305;

Registro2305 crear_registro2305(int id) {
    Registro2305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
