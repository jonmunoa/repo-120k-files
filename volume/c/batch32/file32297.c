// fichero 32297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32297;

Registro32297 crear_registro32297(int id) {
    Registro32297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
