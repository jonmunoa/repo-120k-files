// fichero 13185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13185;

Registro13185 crear_registro13185(int id) {
    Registro13185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
