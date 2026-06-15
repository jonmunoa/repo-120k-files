// fichero 36457 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36457;

Registro36457 crear_registro36457(int id) {
    Registro36457 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
