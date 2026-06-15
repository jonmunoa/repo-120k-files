// fichero 3457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3457;

Registro3457 crear_registro3457(int id) {
    Registro3457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
