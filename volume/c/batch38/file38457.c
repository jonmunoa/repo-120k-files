// fichero 38457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38457;

Registro38457 crear_registro38457(int id) {
    Registro38457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
