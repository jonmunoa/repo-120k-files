// fichero 49457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49457;

Registro49457 crear_registro49457(int id) {
    Registro49457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
