// fichero 48297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48297;

Registro48297 crear_registro48297(int id) {
    Registro48297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
