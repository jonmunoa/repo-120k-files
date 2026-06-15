// fichero 45141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45141;

Registro45141 crear_registro45141(int id) {
    Registro45141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
