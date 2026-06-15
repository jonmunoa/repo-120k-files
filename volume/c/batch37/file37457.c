// fichero 37457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37457;

Registro37457 crear_registro37457(int id) {
    Registro37457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
