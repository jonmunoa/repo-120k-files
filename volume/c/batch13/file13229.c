// fichero 13229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13229;

Registro13229 crear_registro13229(int id) {
    Registro13229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
