// fichero 13709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13709;

Registro13709 crear_registro13709(int id) {
    Registro13709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
