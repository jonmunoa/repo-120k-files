// fichero 457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro457;

Registro457 crear_registro457(int id) {
    Registro457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
