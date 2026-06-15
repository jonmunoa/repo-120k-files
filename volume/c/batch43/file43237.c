// fichero 43237 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43237;

Registro43237 crear_registro43237(int id) {
    Registro43237 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
