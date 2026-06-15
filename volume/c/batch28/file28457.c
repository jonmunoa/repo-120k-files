// fichero 28457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28457;

Registro28457 crear_registro28457(int id) {
    Registro28457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
