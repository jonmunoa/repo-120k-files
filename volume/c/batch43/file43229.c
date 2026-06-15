// fichero 43229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43229;

Registro43229 crear_registro43229(int id) {
    Registro43229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
