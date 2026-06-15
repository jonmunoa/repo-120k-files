// fichero 2589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2589;

Registro2589 crear_registro2589(int id) {
    Registro2589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
