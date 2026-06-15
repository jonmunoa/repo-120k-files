// fichero 46457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46457;

Registro46457 crear_registro46457(int id) {
    Registro46457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
