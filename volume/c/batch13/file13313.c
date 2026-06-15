// fichero 13313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13313;

Registro13313 crear_registro13313(int id) {
    Registro13313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
