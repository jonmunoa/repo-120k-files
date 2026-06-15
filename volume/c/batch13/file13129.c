// fichero 13129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13129;

Registro13129 crear_registro13129(int id) {
    Registro13129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
