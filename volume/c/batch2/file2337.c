// fichero 2337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2337;

Registro2337 crear_registro2337(int id) {
    Registro2337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
