// fichero 20297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20297;

Registro20297 crear_registro20297(int id) {
    Registro20297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
