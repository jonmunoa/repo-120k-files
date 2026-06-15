// fichero 13013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13013;

Registro13013 crear_registro13013(int id) {
    Registro13013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
