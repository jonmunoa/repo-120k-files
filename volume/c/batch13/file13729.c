// fichero 13729 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13729;

Registro13729 crear_registro13729(int id) {
    Registro13729 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
