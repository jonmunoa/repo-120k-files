// fichero 13057 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13057;

Registro13057 crear_registro13057(int id) {
    Registro13057 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
