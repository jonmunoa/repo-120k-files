// fichero 11457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11457;

Registro11457 crear_registro11457(int id) {
    Registro11457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
