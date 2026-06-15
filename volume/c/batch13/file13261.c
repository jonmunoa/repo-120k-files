// fichero 13261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13261;

Registro13261 crear_registro13261(int id) {
    Registro13261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
