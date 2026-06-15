// fichero 2481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2481;

Registro2481 crear_registro2481(int id) {
    Registro2481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
