// fichero 2389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2389;

Registro2389 crear_registro2389(int id) {
    Registro2389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
