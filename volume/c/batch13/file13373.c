// fichero 13373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13373;

Registro13373 crear_registro13373(int id) {
    Registro13373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
