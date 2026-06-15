// fichero 14457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14457;

Registro14457 crear_registro14457(int id) {
    Registro14457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
