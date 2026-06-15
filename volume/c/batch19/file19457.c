// fichero 19457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19457;

Registro19457 crear_registro19457(int id) {
    Registro19457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
