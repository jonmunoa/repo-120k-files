// fichero 12457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12457;

Registro12457 crear_registro12457(int id) {
    Registro12457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
