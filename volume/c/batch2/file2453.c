// fichero 2453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2453;

Registro2453 crear_registro2453(int id) {
    Registro2453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
