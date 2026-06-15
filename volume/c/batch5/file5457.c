// fichero 5457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5457;

Registro5457 crear_registro5457(int id) {
    Registro5457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
