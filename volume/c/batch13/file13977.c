// fichero 13977 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13977;

Registro13977 crear_registro13977(int id) {
    Registro13977 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
