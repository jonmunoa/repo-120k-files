// fichero 20457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20457;

Registro20457 crear_registro20457(int id) {
    Registro20457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
