// fichero 13665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13665;

Registro13665 crear_registro13665(int id) {
    Registro13665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
