// fichero 23141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23141;

Registro23141 crear_registro23141(int id) {
    Registro23141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
