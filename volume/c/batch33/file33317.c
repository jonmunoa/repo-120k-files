// fichero 33317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33317;

Registro33317 crear_registro33317(int id) {
    Registro33317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
