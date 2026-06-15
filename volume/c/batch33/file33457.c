// fichero 33457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33457;

Registro33457 crear_registro33457(int id) {
    Registro33457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
