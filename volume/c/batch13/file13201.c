// fichero 13201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13201;

Registro13201 crear_registro13201(int id) {
    Registro13201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
