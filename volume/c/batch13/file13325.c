// fichero 13325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13325;

Registro13325 crear_registro13325(int id) {
    Registro13325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
