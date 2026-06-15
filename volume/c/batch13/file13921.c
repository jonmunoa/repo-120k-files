// fichero 13921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13921;

Registro13921 crear_registro13921(int id) {
    Registro13921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
