// fichero 23413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23413;

Registro23413 crear_registro23413(int id) {
    Registro23413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
