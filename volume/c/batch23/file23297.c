// fichero 23297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23297;

Registro23297 crear_registro23297(int id) {
    Registro23297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
