// fichero 33269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33269;

Registro33269 crear_registro33269(int id) {
    Registro33269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
