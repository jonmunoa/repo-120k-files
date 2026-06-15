// fichero 34253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34253;

Registro34253 crear_registro34253(int id) {
    Registro34253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
