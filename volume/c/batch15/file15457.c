// fichero 15457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15457;

Registro15457 crear_registro15457(int id) {
    Registro15457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
