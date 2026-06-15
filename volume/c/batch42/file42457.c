// fichero 42457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42457;

Registro42457 crear_registro42457(int id) {
    Registro42457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
