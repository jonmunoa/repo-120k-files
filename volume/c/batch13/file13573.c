// fichero 13573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13573;

Registro13573 crear_registro13573(int id) {
    Registro13573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
