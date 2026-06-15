// fichero 13237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13237;

Registro13237 crear_registro13237(int id) {
    Registro13237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
