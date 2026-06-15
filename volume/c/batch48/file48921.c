// fichero 48921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48921;

Registro48921 crear_registro48921(int id) {
    Registro48921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
