// fichero 34457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34457;

Registro34457 crear_registro34457(int id) {
    Registro34457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
