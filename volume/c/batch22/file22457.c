// fichero 22457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22457;

Registro22457 crear_registro22457(int id) {
    Registro22457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
