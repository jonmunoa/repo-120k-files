// fichero 13297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13297;

Registro13297 crear_registro13297(int id) {
    Registro13297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
