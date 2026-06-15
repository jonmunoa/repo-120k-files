// fichero 13217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13217;

Registro13217 crear_registro13217(int id) {
    Registro13217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
