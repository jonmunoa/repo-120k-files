// fichero 13457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13457;

Registro13457 crear_registro13457(int id) {
    Registro13457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
