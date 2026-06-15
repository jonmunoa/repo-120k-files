// fichero 49393 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49393;

Registro49393 crear_registro49393(int id) {
    Registro49393 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
