// fichero 13833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13833;

Registro13833 crear_registro13833(int id) {
    Registro13833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
