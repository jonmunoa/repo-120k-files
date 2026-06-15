// fichero 41457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41457;

Registro41457 crear_registro41457(int id) {
    Registro41457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
