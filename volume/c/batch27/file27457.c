// fichero 27457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27457;

Registro27457 crear_registro27457(int id) {
    Registro27457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
