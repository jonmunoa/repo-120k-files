// fichero 16457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16457;

Registro16457 crear_registro16457(int id) {
    Registro16457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
