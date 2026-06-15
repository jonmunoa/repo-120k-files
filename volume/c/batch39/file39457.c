// fichero 39457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39457;

Registro39457 crear_registro39457(int id) {
    Registro39457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
