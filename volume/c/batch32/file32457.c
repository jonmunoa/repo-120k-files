// fichero 32457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32457;

Registro32457 crear_registro32457(int id) {
    Registro32457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
