// fichero 13965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13965;

Registro13965 crear_registro13965(int id) {
    Registro13965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
