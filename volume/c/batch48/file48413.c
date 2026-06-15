// fichero 48413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48413;

Registro48413 crear_registro48413(int id) {
    Registro48413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
