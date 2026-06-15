// fichero 22989 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22989;

Registro22989 crear_registro22989(int id) {
    Registro22989 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
