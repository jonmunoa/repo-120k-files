// fichero 48141 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48141;

Registro48141 crear_registro48141(int id) {
    Registro48141 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
