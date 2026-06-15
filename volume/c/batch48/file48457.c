// fichero 48457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48457;

Registro48457 crear_registro48457(int id) {
    Registro48457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
