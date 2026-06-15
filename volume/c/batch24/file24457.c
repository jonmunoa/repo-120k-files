// fichero 24457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24457;

Registro24457 crear_registro24457(int id) {
    Registro24457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
