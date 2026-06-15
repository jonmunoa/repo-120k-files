// fichero 45457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45457;

Registro45457 crear_registro45457(int id) {
    Registro45457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
