// fichero 32281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32281;

Registro32281 crear_registro32281(int id) {
    Registro32281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
