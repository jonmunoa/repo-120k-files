// fichero 23253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23253;

Registro23253 crear_registro23253(int id) {
    Registro23253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
