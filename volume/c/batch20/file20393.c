// fichero 20393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20393;

Registro20393 crear_registro20393(int id) {
    Registro20393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
