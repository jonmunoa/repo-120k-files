// fichero 43185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43185;

Registro43185 crear_registro43185(int id) {
    Registro43185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
