// fichero 31457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31457;

Registro31457 crear_registro31457(int id) {
    Registro31457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
