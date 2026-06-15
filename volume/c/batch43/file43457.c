// fichero 43457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43457;

Registro43457 crear_registro43457(int id) {
    Registro43457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
